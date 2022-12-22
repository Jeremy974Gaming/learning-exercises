#include <stdio.h>

int intArray[5];

int main(int argc, char **argv) {
    int i;

    intArray[0] = 1;
    intArray[1] = 11;
    intArray[2] = 21;
    intArray[3] = 31;
    intArray[4] = 41;

    for (i = 0; i < 5; i++) {
        printf("%d\n", intArray[i]);
    }
    printf("The integer at intArray[3] is: %d\n", intArray[3]);
 }