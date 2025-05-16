/* Όνομα αρχείου:       simple-flex-code.l
   Περιγραφή:           Λεκτικός αναλυτής για την γλώσσα Uni-Clips
   Οδηγίες εκτέλεσης:   Με την χρήση της εντολής make διαβάζεται το περιεχόμενο του αρχείου
                        input.txt και τα αποτελέσματα τυπώνονται στην οθόνη
*/

/* H anagnwsh periorizetai se ena mono arxeio kai termatizei sto prwto EOF */
%option noyywrap
/* Τμήμα ορισμών του προγράμματος */

%{

/* Βιβλιοθήκες της C που χρησιμοποιούνται */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Το header file με αντιστοίχηση των tokens σε αριθμούς */
#include "token.h"

/* Μετρητής για τις γραμμές */
int line = 1;

/* Αντιστοίχηση των κανονικών εκφράσεων σε αναγνωριστικά για πιο εύκολη χρήση */
%}


DELIMITER       [ \t]+
INTCONST        0|[+-]?[1-9]+[0-9]*
DOUBLE          ([-+]?[0-9]+([eE][0-9]+)?\.([0-9]+)?([eE][-+]?)?[0-9]+)|([-+]?[0-9]+[eE][-+]?[0-9]+)
STRING          \"([^\\"]|\\[\\n"])*\"
COMMENT         ;.*
VARIABLE        \?[A-Za-z0-9]+
NAME            [A-Za-z][A-Za-z0-9_-]*

/* Επιστροφή του αριθμού που έχει οριστεί στο tokens.h για κάθε αναγνωριστικό που εντοπίζεται */
%%

{DELIMITER}     { return DELIMITER; }
{INTCONST}      { return INTCONST; }
{DOUBLE}        { return DOUBLE; }
{STRING}        { return STRING; }
{COMMENT}       { return COMMENT; }
{VARIABLE}      { return VARIABLE; }
{NAME}          { return NAME; }
\n              { line++; printf("\n"); }
<<EOF>>         { printf("#END-OF-FILE#\n"); exit(0); }

%%

/* Πίνακας με όλα τα ονόματα των tokens στην ίδια σειρά με το αρχείο tokens.h */
char *tname[7] = {"DELIMITER", "INTCONST", "DOUBLE", "STRING" , "COMMENT", "VARIABLES", "NAME"};

/* Κώδικας της συνάρτησης main που ξεκινάει το πρόγραμμα */
int main(int argc, char **argv){
        int token;

        /* Πρέπει να δοθεί 1 όνομα αρχείου για διάβασμα ή 2 ονόματα αρχείων για διάβασμα και γράψιμο */
        if(argc == 3){
                /* Άνοιγμα του αρχείου για διάβασμα */
                if(!(yyin = fopen(argv[1], "r"))) {
                        fprintf(stderr, "Cannot read file: %s\n", argv[1]);
                        return 1;
                }
                /* Άνοιγμα του αρχείου για γράψιμο */
                if(!(yyout = fopen(argv[2], "w"))) {
                        fprintf(stderr, "Cannot create file: %s\n", argv[2]);
                        return 1;
                }
        }
        else if(argc == 2){
                /* Άνοιγμα του αρχείου για διάβασμα */
                if(!(yyin = fopen(argv[1], "r"))) {
                        fprintf(stderr, "Cannot read file: %s\n", argv[1]);
                        return 1;
                }
        }

        /* Γίνεται διάβασμα των χαρακτήρων από το αρχείο εισόδου για να βρεθούν
           τα tokens. Όταν βρεθεί ένα token εκτελείτε ο κώδικας που έχει οριστεί
           ανάμεσα στα %% %%.

           π.χ. Για το INTCONST έχουμε:
           {INTCONST}      { return INTCONST; }
           Άρα θα εκτελεστεί η return INTCONTS
           Στο tokens.h INCONST = 2
           Οπότε η yylex επιστρέφει την τιμή 2
        */

        while( (token=yylex()) >= 0){
                /* Εμφανίζει την γραμμή που βρέθηκε το token, ποιό είνα αυτό (με βάση τον πίνακα tname)
                   και την τιμή που έχει. */
                fprintf(yyout, "\tLine=%d, token=%s, value=\"%s\"\n", line, tname[token-1], yytext);
        }
        return 0;
}
