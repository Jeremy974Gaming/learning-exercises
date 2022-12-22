#include <stdio.h>

int main(int argc, char **argv) {
    int i;
    for (i = 0; i < argc; i++) {
        printf("Hello World!\n");
        printf("argument %d is %s\n", i, argv[i]);
    };
    printf("There are %d arguments\n", argc, i, argv[i]);
    return 0;
}