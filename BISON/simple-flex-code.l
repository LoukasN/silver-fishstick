/* Όνομα αρχείου:       simple-flex-code.l
   Περιγραφή:           Λεκτικός αναλυτής για την γλώσσα Uni-Clips
   Οδηγίες εκτέλεσης:   Λειτουργεί σε συνδυασμό με το simple-bison-code.y για
                        την αναγνώριση λεκτικών μονάδων
*/

%x error
%option noyywrap

/* Τμήμα ορισμών του προγράμματος */
%{
/* Βιβλιοθήκες της C που χρησιμοποιούνται */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Definitions για τα tokens που δημιουργούνται αυτόματα από το simple-bison-code.y */
#include "simple-bison-code.h"
int line = 1;
/* Μετρητές για αναγνώριση λαθών και μη αποδεκτών tokens από το flex */
int countWrongTokens = 0;
int countCorrectTokens = 0;

/* Αντιστοίχηση των κανονικών εκφράσεων σε αναγνωριστικά για πιο εύκολη χρήση */
%}

DELIMITER       [ \t]+
INTCONST        [-+]?(0|[1-9]+[0-9]*)
DOUBLE          ([-+]?([1-9][0-9]*|0)\.([0-9]+[eE][-+]?)?([1-9][0-9]*|([0-9]*)))|([-+]?[0-9]+[eE][-+]?([1-9][0-9]*|0))
STRING          \"([^\n\\\"]|\\[n\\"])*\"
COMMENT         ;.*
VARIABLE        \?[A-Za-z0-9]+
NAME            [A-Za-z][A-Za-z0-9_-]*

%%
"bind"            { countCorrectTokens++; yylval.strVal = strdup(yytext); return BIND; }
"test"            { countCorrectTokens++; yylval.strVal = strdup(yytext); return TEST; }
"read"            { countCorrectTokens++; yylval.strVal = strdup(yytext); return READ; }
"deffacts"        { countCorrectTokens++; yylval.strVal = strdup(yytext); return DEFFACTS; }
"defrule"         { countCorrectTokens++; yylval.strVal = strdup(yytext); return DEFRULE; }
"printout"        { countCorrectTokens++; yylval.strVal = strdup(yytext); return PRINTOUT; }

{DELIMITER}     { }
{INTCONST}      { countCorrectTokens++; yylval.intVal = atoi(yytext); return INTCONST; }
{DOUBLE}        { countCorrectTokens++; yylval.doubleVal = atof(yytext); return DOUBLE; }
{STRING}        { countCorrectTokens++; yylval.strVal = strdup(yytext); return STRING; }
{COMMENT}       { }
{VARIABLE}      { countCorrectTokens++; yylval.strVal = strdup(yytext); return VARIABLE; }
{NAME}          { countCorrectTokens++; yylval.strVal = strdup(yytext); return NAME; }

"->"            { countCorrectTokens++; return ARROW; }

\(              { countCorrectTokens++; return LPAR; }
\)              { countCorrectTokens++; return RPAR; }
\+              { countCorrectTokens++; return PLUS; }
\-              { countCorrectTokens++; return MINUS; }
\*              { countCorrectTokens++; return MULT; }
\/              { countCorrectTokens++; return DIV; }
\=              { countCorrectTokens++; return EQUALS; }
\n              { line++; return NEWLINE; }

"-->"           { countCorrectTokens++; printf("FLEX WARNING: Double dash detected on the \"->\" symbol on line %d\n", line); return ARROW; }

\++             { countCorrectTokens++; printf("FLEX WARNING: Multiple \"+\" operators given on line %d\n", line); return PLUS; }
\-+             { countCorrectTokens++; printf("FLEX WARNING: Multiple \"-\" operators given on line %d\n", line); return MINUS; }
\*+             { countCorrectTokens++; printf("FLEX WARNING: Multiple \"*\" operators given on line %d\n", line); return MULT; }
\/+             { countCorrectTokens++; printf("FLEX WARNING: Multiple \"/\" operators given on line %d\n", line); return DIV; }
\=+             { countCorrectTokens++; printf("FLEX WARNING: Multiple \"=\" operators given on line %d\n", line); return EQUALS; }

\(\)            { printf("FLEX WARNING: Empty parenthesis found on line %d\n", line); }


.               { printf("Not recognized token: %s\n", yytext); countWrongTokens++; BEGIN(error); return TOKEN_ERROR; }
<error>.        { }
<error>\n       { line++; BEGIN(0); }
%%
