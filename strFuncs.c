#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXSTRLEN 200

char myStr[] =  "On the 2nd day of Christmas my true love gave me, 2 turtle doves and a poem.";
char tens[] =   "         10          20          30          40          50";
char nums[] =   "12345678901234567890123456789012345678901234567890";

char msg1[MAXSTRLEN] = "Result 1 : ";
char msg2[MAXSTRLEN] = "Result 2 : ";
char myStr2[6];

void showStr() {
    printf("\n\n%s\n", myStr);
    printf("%s\n%s\n", tens, nums);
}

void srcStr(char searchStr[]) {
    char *ptrToStr;
    int foundAt;
    ptrToStr = strstr(myStr, searchStr);
    foundAt = (int)((ptrToStr - myStr) + 1);
    if (ptrToStr != NULL)
        printf("\n'%s' found at position %d\n", searchStr, foundAt);
    else
        printf("\n'%s' not found\n", searchStr);
}

void copyStr() {
    /*
    strncpy_s(myStr2, 6, "Easter", 4);
    printf("\nstrncpy_s: Copied this str : '%s'", myStr2);
    */
    myStr2[0] = 0;
    strncpy(myStr2, "Easter", 4);
    printf("\nCopied this str: '%s'", myStr2);
}

void copyStr_s() {
    int errCode;
    errCode = strncpy_s(myStr2, 7, "Easter", 6);
    printf("\nCopied str '%s' | errCode= %d", myStr2, errCode);
    myStr2[0] = 0;
    errCode = strncpy_s(myStr2, 6, "Easter", 4);
    printf("\nCopied str '%s' | errCode = %d", myStr2, errCode);
}

void catStr() {
    strcat(msg1, "Easter");
    printf("\nstrcat: '%s'", msg1);
    strncat(msg2, "Easter", 4);
    printf("\nstrncat: '%s'\n", msg2);
}

int main(int argc, char **argv) {
    printf("Len of myStr = %d", strlen(myStr));
    printf("\nLen of 'hello' = %d", strlen("hello"));
    showStr();
    srcStr("2nd");
    srcStr("Christmas");
    srcStr("Easter");
    copyStr();
    copyStr_s();
    catStr();
    return 0;
}