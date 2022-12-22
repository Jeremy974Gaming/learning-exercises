#include <stdio.h>

#define STRLEN 9

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

int main(int ac, char **av) {
    char firstName[STRLEN];
    char lastName[STRLEN];
    int lnFirstName;
    int lnLastName;
    printf("Enter your first name : ");
    lnFirstName = readln(firstName, STRLEN);
    printf("Enter your last name : ");
    lnLastName = readln(lastName, STRLEN);
    printf("Hello, %s, %s\n", firstName, lastName);
    printf("Length of firstName = %d, lastName = %d", lnFirstName, lnLastName);
}