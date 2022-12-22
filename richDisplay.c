#include <stdio.h>
#include "readln.c"

int main(int ac, char **av) {
    int age;
    int numChildren;
    double salary;

    age = 26;
    numChildren = 0;
    salary = 16600.00;

    if ((age <= 30) && (salary >= 30000)) {
        printf("You are a rich young person\n");
    } else {
        printf("You are NOT a rich yound person\n");
    }

    if ((age <= 30) || (salary >= 30000)) {
        printf("You are either rich or young or both\n");
    } else {
        printf("You are neither rich nor young\n");
    }

    if ((age <= 30) && (salary >= 30000) && (numChildren != 0)) {
        printf("You are a rich young parent\n");
    } else {
        printf("You are NOT a rich young parent\n");
    }
    return (0);
}