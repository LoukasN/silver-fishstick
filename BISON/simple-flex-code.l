/* Όνομα αρχείου:       simple-flex-code.l
   Περιγραφή:           Λεκτικός αναλυτής για την γλώσσα Uni-Clips
   Οδηγίες εκτέλεσης:   Με την χρήση της εντολής make διαβάζεται το περιεχόμενο του αρχείου
                        input.txt και τα αποτελέσματα τυπώνονται στην οθόνη
*/

%x error
%option noyywrap
/* Τμήμα ορισμών του προγράμματος */

%{

/* Βιβλιοθήκες της C που χρησιμοποιούνται */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/* Definitions για τα tokens από το bison */
#include "simple-bison-code.h"
int line = 1;
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
bind              { yylval.strVal = strdup(yytext); return BIND; }
test              { yylval.strVal = strdup(yytext); return TEST; }
read              { yylval.strVal = strdup(yytext); return READ; }
deffacts          { yylval.strVal = strdup(yytext); return DEFFACTS; }
defrule           { yylval.strVal = strdup(yytext); return DEFRULE; }
printout          { yylval.strVal = strdup(yytext); return PRINTOUT; }

{DELIMITER}     { return DELIMITER; }
{INTCONST}      { countCorrectTokens++; yylval.intVal = atoi(yytext); return INTCONST; }
{DOUBLE}        { countCorrectTokens++; yylval.doubleVal = atof(yytext); return DOUBLE; }
{STRING}        { countCorrectTokens++; yylval.strVal = strdup(yytext); return STRING; }
{COMMENT}       { return COMMENT; }
{VARIABLE}      { countCorrectTokens++; yylval.strVal = strdup(yytext); return VARIABLE; }
{NAME}          { countCorrectTokens++; yylval.strVal = strdup(yytext); return NAME; }


\(              { countCorrectTokens++; return LPAR; }
\)              { countCorrectTokens++; return RPAR; }
\+              { countCorrectTokens++; return PLUS; }
\-              { countCorrectTokens++; return MINUS; }
\*              { countCorrectTokens++; return MULT; }
\/              { countCorrectTokens++; return DIV; }
\=              { countCorrectTokens++; return EQUALS; }
\n              { line++; return NEWLINE; }

.               { printf("Not recognized token: %s\n", yytext); countWrongTokens++; BEGIN(error); return TOKEN_ERROR;}
<error>\n       { line++; }

%%
