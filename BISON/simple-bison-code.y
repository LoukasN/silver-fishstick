/*
   Όνομα αρχείου: simple-bison-code.y

   Περιγραφή: Συντακτικός αναλυτής για την γλώσσα Uni-Clips. Συνδυάζεται με το αρχείο
              simple-flex-code.l που εκτελεί την λεκτική ανάλυση και επιστρέφει τα
              tokens στο συντακτικό αναλυτή για έλεγχο.

   Οδηγίες εκτέλεσης: make και τρέχουμε ./simple-bison-code < input.txt
    
   Σχόλια:   Με την χρήση της εντολής make γίνεται μεταγλώττιση του αρχείου simple-bison-code.y
             που με το flag -d δημιουργεί ένα αρχείο simple-bison-code.h με τα definitions για
             τα tokens. Στην συνέχεια γίνεται η μεταγλώττιση του simple-flex-code.l. Τα δύο αρχεία
             simple-flex-code.c και simple-bison-code.c μεταγλωττίζονται από το gcc και δημιουργείται
             το τελικό πρόγραμμα simple-bison-code.
*/

/* Δηλώσεις συναρτήσεων και βιβλιοθήκες */
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    int yylex();
    /* Συνάρτηση για εμφάνιση συντακτικών λαθών*/
    void yyerror(const char *msg);
    /* Μετρητές */
    int countCorrectExpr = 0, countWrongExpr = 0, countFatalErrors = 0;
    /* Συναρτήσεις που δηλώνονται σε άλλα αρχεία*/
    extern int line, countWrongTokens, countCorrectTokens;
    extern char* yytext;
%}

/* Τύποι των στοιχείων που γυρνάει ο flex */
%union {
    int intVal;
    double doubleVal;
    char *strVal;
}

/* Δηλώσεις για αναγνωρίσημα tokens από το bison και το flex */
%token <intVal> INTCONST
%token <doubleVal> DOUBLE
%token <strVal> VARIABLE STRING NAME COMMENT
%token BIND TEST READ DEFFACTS DEFRULE PRINTOUT 
%token PLUS MINUS MULT DIV EQUALS
%token LPAR RPAR 
%token DELIMITER NEWLINE TOKEN_ERROR ARROW

/* Δηλώσεις για τύπους των tokens*/
%type <intVal> exprINT 
%type <doubleVal> exprDOUBLE
%type <strVal> expr

/* Προτεραιότητες των tokens (Αύξουσα σειρά) */
%left EQUALS
%left PLUS MINUS
%left MULT DIV

/* Αρχή του προγράμματος */
%start program

%%
program:
        | program line
        ;

line:
        NEWLINE { }
        | exprERRORCALC { countWrongExpr++; }
        | exprERRORCOMP { countWrongExpr++; }
        | expr NEWLINE { countCorrectExpr++; }
        | exprINT NEWLINE { countCorrectExpr++; }
        | exprDOUBLE NEWLINE { countCorrectExpr++; }
        | exprCOMPARISON NEWLINE { countCorrectExpr++; }
        | exprEVENTS NEWLINE { countCorrectExpr++; }
        | error NEWLINE {  countWrongExpr++; yyerrok; }
        ;

exprERRORCALC:
        LPAR PLUS exprINT exprDOUBLE RPAR { printf("WARNING: Cannot add integer with double on line %d\n", line); }
        | LPAR MINUS exprINT exprDOUBLE RPAR { printf("WARNING: Cannot subtract integer with double on line %d\n", line); }
        | LPAR MULT exprINT exprDOUBLE RPAR { printf("WARNING: Cannot multiply integer with double on line %d\n", line); }
        | LPAR DIV exprINT exprDOUBLE RPAR { printf("WARNING: Cannot divide integer with double on line %d\n", line); }
        | LPAR PLUS exprDOUBLE exprINT RPAR { printf("WARNING: Cannot add double with integer on line %d\n", line); }
        | LPAR MINUS exprDOUBLE exprINT RPAR { printf("WARNING: Cannot subtract double with integer on line %d\n", line); }
        | LPAR MULT exprDOUBLE exprINT RPAR { printf("WARNING: Cannot multiply double with integer on line %d\n", line); }
        | LPAR DIV exprDOUBLE exprINT RPAR { printf("WARNING: Cannot divide double with integer on line %d\n", line); }
        ; 

exprERRORCOMP:
        LPAR EQUALS exprINT exprDOUBLE RPAR { printf("WARNING: Cannot compare integer with double on line %d\n", line); }
        | LPAR EQUALS exprDOUBLE exprINT RPAR { printf("WARNING: Cannot compare double with integer on line %d\n", line); }
        ;

expr:
        VARIABLE { }
        | STRING { }
        | NAME { }
        | LPAR BIND VARIABLE exprVALUE RPAR { }
        | LPAR TEST exprCOMPARISON RPAR { }
        | LPAR DEFFACTS NAME exprEVENTS RPAR { }
        | LPAR DEFRULE NAME exprEVENTS LPAR TEST exprCOMPARISON RPAR ARROW LPAR PRINTOUT LPAR exprGROUPS RPAR RPAR RPAR { }
        | LPAR PRINTOUT LPAR exprGROUPS RPAR RPAR { }
        ;

exprVALUE:
        INTCONST { }
        | DOUBLE { }
        | STRING { }
        | LPAR READ RPAR { }
        | exprINT { }
        | exprDOUBLE { }
        | exprCOMPARISON { }
        ;

exprINT:
        INTCONST {  }
        | VARIABLE { }
        | LPAR PLUS exprINT exprINT RPAR { }
        | LPAR MINUS exprINT exprINT RPAR { }
        | LPAR MULT exprINT exprINT RPAR { }
        | LPAR DIV exprINT exprINT RPAR { }
        ;

exprDOUBLE:
        DOUBLE {  }
        | VARIABLE { }
        | LPAR PLUS exprDOUBLE exprDOUBLE RPAR { }
        | LPAR MINUS exprDOUBLE exprDOUBLE RPAR { }
        | LPAR MULT exprDOUBLE exprDOUBLE RPAR { }
        | LPAR DIV exprDOUBLE exprDOUBLE RPAR { }
        | LPAR PLUS exprINT exprDOUBLE RPAR { }
        | LPAR PLUS exprDOUBLE exprINT RPAR { }
        | LPAR MINUS exprINT exprDOUBLE RPAR { }
        | LPAR MINUS exprDOUBLE exprINT RPAR { }
        | LPAR MULT exprINT exprDOUBLE RPAR { }
        | LPAR MULT exprDOUBLE exprINT RPAR { }
        | LPAR DIV exprINT exprDOUBLE RPAR { }
        | LPAR DIV exprDOUBLE exprINT RPAR { }
        ;

exprCOMPARISON:
        LPAR EQUALS exprINT exprINT RPAR { }
        | LPAR EQUALS exprDOUBLE exprDOUBLE RPAR { }
        | LPAR EQUALS VARIABLE exprINT RPAR { }
        | LPAR EQUALS exprINT VARIABLE RPAR { }
        | LPAR EQUALS VARIABLE VARIABLE RPAR { }
        ;

exprEVENTS:
        | exprEVENT exprEVENTS
        ;

exprEVENT:
        LPAR exprELEMENTS exprELEMENTS RPAR
        ;

exprGROUPS:
        | exprGROUP exprGROUPS
        ;

exprGROUP:
        LPAR exprELEMENTS RPAR
        ;

exprELEMENTS:
        | NAME exprELEMENTS
        | INTCONST exprELEMENTS
        | DOUBLE exprELEMENTS
        | STRING exprELEMENTS
        | VARIABLE exprELEMENTS
        ;

%%

void yyerror(const char *msg) {
    fprintf(stderr, "Bison ERROR on line: %d with error message: %s\n", line, msg);
    countFatalErrors++;
}

/* Όταν ξεκινήσει το πρόγραμμα καλεί απευθείας το yyparse() για να
ξεκινήσει η ανάλυση */
int main(void)  {
        yyparse();
        printf("\n");
        /* Αποτελέσματα λεκτικής και συντακτικής ανάλυσης */
        printf("Correct tokens = %d\n", countCorrectTokens);
        printf("Correct expressions = %d\n", countCorrectExpr);
        printf("Wrong tokens = %d\n", countWrongTokens);
        printf("Wrong expressions = %d\n", countWrongExpr);
        printf("Fatal error(s) = %d\n", countFatalErrors);
        return 0;
}
