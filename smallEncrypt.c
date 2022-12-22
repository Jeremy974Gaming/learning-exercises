#include <stdio.h>

char charArray[] = "String Encryption! ooooooo";

void whileBreak() {
    int i;
    char c;
    char str[50];
    i = 0;
    while (i >= 0) {
        c = charArray[i];
        printf("[%d]='%c'", i, c);
        if (c == '!') {
            str[i] = '\0';
            break;
        }
        str[i] = c;
        i++;
    }
    printf("\nAfter while loop... str=-'%s'", str);
}

void forBreak() {
    int i;
    char str[50];
    char c;

    for (i = 0; i < 50; i++) {
        c = charArray[i];
        if (c == ' ') {
            str[i] = c;
            continue;
        }
        if (c == '!') {
            str[i] = '\0';
            break;
        }
        str[i] = charArray[i] + 1;
    }
    printf("Encrypted string is '%s'\n", str);

    for (i = 0; i < 50; i++) {
        c = str[i];
        if (c == ' ') {
            continue;
        }
        if (c == '\0') {
            break;
        }
        str[i] = str[i] - 1;
    }
    printf("Decrypted string is '%s'\n", str);
}