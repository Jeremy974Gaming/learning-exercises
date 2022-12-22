#include <stdio.h>

#define STRLEN 5

/*
int readln(char s[], int maxlen) {
    int len_s;
    fgets(s, maxlen, stdin);
    len_s = strlen(s);
    if (s[len_s - 1] == '\n') {
        s[len_s - 1] = '\0';
        len_s -= 1;
    }
    rewind(stdin);
    return len_s;
}
*/

int readln(char s[], int maxlen) {
    char ch;
    int i;
    int charRemain;
    i = 0;
    charRemain = 1;
    while (charRemain) {
        ch = getchar();
        if ((ch == '\n') || (ch == EOF)) {
            charRemain = 0;
        } else if (i < maxlen - 1) {
            s[i] = ch;
            i++;
        }
    }
    s[i] = '\0';
    return i;
}