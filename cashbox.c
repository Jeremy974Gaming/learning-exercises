#include <Stdio.h>

int main(int argc, char **argv) {
    double change;
    double total;

    total = 500.50;
    change = 10.5;

    printf("change=%.2f\n", change);
    change = 100.25;
    printf("change=%.2f\n", change);
    printf("total=%.2f\n", total);
    return 0;
}