#include <stdio.h>

int main(int argc, char **argv) {
    int subTotal;
    int tax;
    int grandTotal;
    double rate;

    rate = 0.175;
    subTotal = 200;
    tax = subTotal * rate;
    grandTotal = subTotal + tax;

    printf("The tax on %d is %d, so the grand total is %d.\n", subTotal, tax, grandTotal);
    return 0;
}