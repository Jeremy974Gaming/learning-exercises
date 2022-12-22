#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXSTRLEN 100

char greet[MAXSTRLEN];

char * strFuncDynamic(char *astring) {
    char *s;
    s = malloc(MAXSTRLEN);
    s[0] = 0;
    strcat(s, "hello ");
    strcat(s, astring);
    strcat(s, "\n");
    return s;
}

char * strFunc(char astring[]) {
    strcat(greet, "hello ");
    strcat(greet, astring);
    strcat(greet, "\n");
    return greet;
}

int main(int argc, char **argv) {
    printf(strFunc("Abby"));
    printf(strFuncDynamic("gail"));
    return 0;
}