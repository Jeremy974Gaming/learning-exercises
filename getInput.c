#include <stdio.h>

void flushInput() {
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

void getInputWithGets() {
    char firstName[5];
    char lastName[5];
    printf("Enter your first name : ");
    gets(firstName);
    printf("Enter your last name : ");
    gets(lastName);
    printf("Hello, %s, %s\n", firstName, lastName);
}

void getInputWithFgets() {
    char firstName[9];
    char lastName[7];
    printf("Enter your first name : ");
    fgets(firstName, 9, stdin);
    printf("Enter your last name : ");
    flushInput();
    fgets(lastName, 7, stdin);
    flushInput();
    printf("Hello, %s, %s\n", firstName, lastName);
}

int main (int argc, char **argv) {
    //getInputWithGets();
    getInputWithFgets();
    return (0);
}