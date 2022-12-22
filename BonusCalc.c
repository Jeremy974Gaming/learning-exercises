#include <Stdio.h>

int main(int argc, char **argv) {
    char ageString[10];
    int age;
    int bonus;

    printf ("Enter your age : ");
    gets (ageString);
    age = atoi (ageString);
    if (age == 0) {
        printf("You entered an invalid age ! Bonus can not be calculated.\n");
    } else {
        if (age > 45) {
        bonus = 1000;
    } else {
        bonus = 500;
    }
    printf ("Your age is %d, so your bonus is %d.\n", age, bonus);
    }
    /*if (age < 70) {
        printf ("Your age is %d, so you are one of our youngest employees !\n", age);
    } else {
        return (0);
    }
    }*/

    return (0);
}