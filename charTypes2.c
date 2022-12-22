#include <stdio.h>
#include <string.h>
#include <ctype.h>

char myStr[] = "Newspeak is doubleplusgood. Oldspeak is doubleplusungood. Fullwise bellyfeel newspeak.";

void charTypes() {
    int i;
    char c;
    int numDigits = 0;
    int numLetters = 0;
    int numUpCase = 0;
    int numLowCase = 0;
    int numSpaces = 0;
    int numPunct = 0;
    int numUnknown = 0;
    int strLength;
    strLength = strlen(myStr);

    for (i = 0; i < strLength; i++) {
        c = myStr[i];
        if(isalpha(c)) {
            numLetters++;
         if (isupper(c)) {
            printf("'%c' [Uppercase character]\n", c);
            numUpCase++;
        } else {
            printf("'%c' [lowercase character]\n", c);
            numLowCase++;
        }
    }  else if (isdigit(c)) {
        printf("'%c' [digit]\n", c);
        numDigits++;
    } else if (ispunct(c)) {
        printf("'%c' [punctuation]\n", c);
        numPunct++;
    } else if (isblank(c)) {
        printf("'%c' [blanks]\n", c);
        numSpaces++;
    } else {
        printf("'%c' [unknown", c);
        numUnknown++;
    }
}
    printf("This string contains %d characters.\n", strLength);
    printf("Of which: %d letters [%d Upper Case, %d lower case]\n", numLetters, numUpCase, numLowCase);
    printf("%d Digits, %d Punctuation marks, %d Spaces and %d Unclassified characters.\n", numDigits, numPunct, numSpaces, numUnknown);
}

int main (int argc, char **argv) {
   /* if(isalpha('x')) {
        printf("'x' is a letter");
    } else {
        printf("'x' is not a letter");
    } */
    charTypes();
    return 0;
}