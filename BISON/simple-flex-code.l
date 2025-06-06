/* Όνομα αρχείου:       simple-flex-code.l
   Περιγραφή:           Λεκτικός αναλυτής για την γλώσσα Uni-Clips
   Οδηγίες εκτέλεσης:   Με την χρήση της εντολής make διαβάζεται το περιεχόμενο του αρχείου
                        input.txt και τα αποτελέσματα τυπώνονται στην οθόνη
*/

%option noyywrap
/* Τμήμα ορισμών του προγράμματος */

%{

/* Βιβλιοθήκες της C που χρησιμοποιούνται */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "simple-bison-code.h"

/* Αντιστοίχηση των κανονικών εκφράσεων σε αναγνωριστικά για πιο εύκολη χρήση */
%}

DELIMITER       [\s\t]+
INTCONST        [-+]?(0|[1-9]+[0-9]*)
DOUBLE          ([-+]?([1-9][0-9]*|0)\.([0-9]+[eE][-+]?)?([1-9][0-9]*|([0-9]*)))|([-+]?[0-9]+[eE][-+]?([1-9][0-9]*|0))
STRING          \"([^\n\\\"]|\\[n\\"])*\"
COMMENT         ;.*
VARIABLE        \?[A-Za-z0-9]+
NAME            [A-Za-z][A-Za-z0-9_-]*

%%
{DELIMITER}     { return DELIMITER; }
{INTCONST}      { yylval = atoi(yytext); return INTCONST; }
{DOUBLE}        { yylval = atol(yytext); return DOUBLE; }
{STRING}        { return STRING; }
{COMMENT}       { return COMMENT; }
{VARIABLE}      { return VARIABLE; }
{NAME}          { return NAME; }

\+              { return PLUS; }
\*              { return MULT; }
\n              { return NEWLINE; }
%%
