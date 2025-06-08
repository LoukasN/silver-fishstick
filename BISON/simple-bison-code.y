/*
   Όνομα αρχείου: simple-bison-code.y

   Περιγραφή: Συντακτικός αναλυτής για την γλώσσα Uni-Clips. Συνδυάζεται με το αρχείο
              simple-flex-code.l που εκτελεί την λεκτική ανάλυση και επιστρέφει τα
              tokens στο συντακτικό αναλυτή για έλεγχο.

   Οδηγίες εκτέλεσης: make < input.txt
    
   Σχόλια:   Με την χρήση της εντολής make γίνεται μεταγλώττιση του αρχείου simple-bison-code.y
             που με το flag -d δημιουργεί ένα αρχείο simple-bison-code.h με τα definitions για
             τα tokens. Στην συνέχεια γίνεται η μεταγλώττιση του simple-flex-code.l. Τα δύο αρχεία
             simple-flex-code.c και simple-bison-code.c μεταγλωττίζονται από το gcc και δημιουργείται
             το τελικό πρόγραμμα simple-bison-code.
*/

/* Δηλώσεις συναρτήτσεων και βιβλιοθήκες */
%{
    #include <stdio.h>
    #include <stdlib.h>
    int yylex();
    void yyerror(const char *msg);
    int countCorrectExpr = 0, countWrongExpressions = 0;
    extern int line, countWrongTokens, countCorrectTokens;
    extern char* yytext;
%}

%union {
    int intVal;
    double doubleVal;
    char *strVal;
}

/* Δηλώσεις για αναγνωρίσημα tokens από το bison και το flex */
%token <intVal> INTCONST
%token <doubleVal> DOUBLE
%token <strVal> VARIABLE STRING NAME COMMENT BIND TEST READ DEFFACTS DEFRULE PRINTOUT 
%token PLUS DELIMITER NEWLINE MINUS MULT DIV EQUALS LPAR RPAR TOKEN_ERROR

/* Δηλώσεις για τύπους των tokens*/
%type <intVal> exprINT exprEQUALS exprTEST 
%type <doubleVal> exprDOUBLE
%type <strVal> expr exprBIND exprDEFFACTS exprDEFRULE exprPRINTOUT exprEVENT exprEVENTS

/* Προτεραιότητες των tokens (Αύξουσα σειρά) */
%left EQUALS
%left PLUS MINUS
%left MULT DIV
%left LPAR RPAR

/* Αρχή του προγράμματος */
%start program

%%
program:
        program expr NEWLINE { printf("expr %s\n", $2); countCorrectExpr++; }
        | program exprBIND NEWLINE { countCorrectExpr++; }
        | program exprTEST NEWLINE { countCorrectExpr++; }
        | program exprEVENT NEWLINE { printf("%s\n", $2); countCorrectExpr++; }
        | program exprDEFFACTS NEWLINE { printf("%s\n", $2); countCorrectExpr++; }
        | program exprDEFRULE NEWLINE { printf("%s\n", $2); countCorrectExpr++; }
        | program exprPRINTOUT NEWLINE { printf("%s\n", $2); countCorrectExpr++; }
        | program exprINT NEWLINE { printf("%d\n", $2); countCorrectExpr++; }
        | program exprDOUBLE NEWLINE { countCorrectExpr++; }
        | program exprEQUALS NEWLINE { countCorrectExpr++; }
        | program error NEWLINE { countWrongExpressions++; }
        | ;

exprINT:
        LPAR PLUS INTCONST INTCONST RPAR { }
        | LPAR PLUS VARIABLE INTCONST RPAR { }
        | LPAR PLUS INTCONST VARIABLE RPAR { }
        | LPAR PLUS VARIABLE VARIABLE RPAR { }
        | LPAR PLUS exprINT INTCONST RPAR { $$ = $3 + $4; }
        | LPAR MINUS INTCONST INTCONST RPAR  { $$ = $3 - $4; }
        | LPAR MINUS VARIABLE INTCONST RPAR { }
        | LPAR MINUS INTCONST VARIABLE RPAR { }
        | LPAR MINUS VARIABLE VARIABLE RPAR { }
        | LPAR MULT INTCONST INTCONST RPAR{ $$ = $3 * $4; }
        | LPAR MULT VARIABLE INTCONST RPAR{ }
        | LPAR MULT INTCONST VARIABLE RPAR{ }
        | LPAR MULT VARIABLE VARIABLE RPAR { }
        | LPAR DIV INTCONST INTCONST  RPAR{ $$ = $3 / $4; }
        | LPAR DIV VARIABLE INTCONST RPAR{ }
        | LPAR DIV INTCONST VARIABLE RPAR{ }
        | LPAR DIV VARIABLE VARIABLE RPAR { }
        ;

exprDOUBLE:
        DOUBLE { $$ = $1; }
        | PLUS exprDOUBLE exprDOUBLE { $$ = $2 + $3; }
        | PLUS exprINT exprDOUBLE { $$ = $2 + $3; }
        | PLUS exprDOUBLE exprINT { $$ = $2 + $3; }
        | MINUS exprDOUBLE exprDOUBLE   { $$ = $2 - $3; }
        | MINUS exprINT exprDOUBLE   { $$ = $2 - $3; }
        | MINUS exprDOUBLE exprINT   { $$ = $2 - $3; }
        | MULT exprDOUBLE exprDOUBLE   { $$ = $2 * $3; }
        | MULT exprINT exprDOUBLE   { $$ = $2 * $3; }
        | MULT exprDOUBLE exprINT   { $$ = $2 * $3; }
        | DIV exprDOUBLE exprDOUBLE   { $$ = $2 / $3; }
        | DIV exprINT exprDOUBLE   { $$ = $2 / $3; }
        | DIV exprDOUBLE exprINT   { $$ = $2 / $3; }
        ;

exprEQUALS:
        LPAR EQUALS VARIABLE INTCONST RPAR { }
        | LPAR EQUALS INTCONST VARIABLE RPAR { }
        | LPAR EQUALS VARIABLE exprINT RPAR { } 
        | LPAR EQUALS exprINT VARIABLE RPAR { } 
        | LPAR EQUALS INTCONST exprINT RPAR { } 
        | LPAR EQUALS exprINT INTCONST RPAR { } 
        ;

exprBIND:
    BIND { $$ = $1;  }
    | LPAR exprBIND VARIABLE INTCONST RPAR { $$ = $3; }
    | LPAR exprBIND VARIABLE LPAR exprINT RPAR RPAR { $$ = $3; }
    | LPAR exprBIND VARIABLE LPAR exprDOUBLE RPAR RPAR { $$ = $3; }
    | LPAR exprBIND VARIABLE LPAR READ RPAR RPAR { $$ = $3; }
    ;
    
exprTEST:
    TEST {  }
    | LPAR exprTEST LPAR exprEQUALS RPAR RPAR { $$ = $4;  }
    | LPAR exprTEST LPAR EQUALS VARIABLE INTCONST RPAR RPAR { }
    | LPAR exprTEST LPAR EQUALS INTCONST VARIABLE RPAR RPAR { }
    | LPAR exprTEST LPAR EQUALS DOUBLE VARIABLE RPAR RPAR { }
    | LPAR exprTEST LPAR EQUALS VARIABLE DOUBLE RPAR RPAR { }
    | LPAR exprTEST LPAR EQUALS VARIABLE VARIABLE RPAR RPAR { }
    ;

exprEVENTS:
    /* empty */
    NAME { }
    | INTCONST { }
    | exprEVENT exprEVENTS { }
    ;

exprEVENT:
    LPAR exprEVENTS RPAR { }
    ;

exprDEFFACTS:
    DEFFACTS { $$ = $1; }
    ;

exprDEFRULE:
    DEFRULE { $$ = $1; }
    ;

exprPRINTOUT:
    PRINTOUT { $$ = $1; }
    ;

expr: 
    VARIABLE { $$ = $1; }
    | STRING { $$ = $1; }
    | COMMENT { $$ = $1; }
    ;

%%

void yyerror(const char *msg) {
    fprintf(stderr, "Bison ERROR on line: %d with error message: %s\n", line, msg);
}

/* Όταν ξεκινήσει το πρόγραμμα καλεί απευθείας το yyparse() για να
ξεκινήσει η ανάλυση */
int main(void)  {
        yyparse();
        printf("\n");
        printf("Correct tokens = %d\n", countCorrectTokens); // WRONG
        printf("Correct expressions = %d\n", countCorrectExpr);
        printf("Wrong tokens = %d\n", countWrongTokens);
        printf("Wrong expressions = %d\n", countWrongExpressions);
        return 0;
}
