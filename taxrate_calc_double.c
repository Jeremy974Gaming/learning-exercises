#include <stdio.h>

int main(int argc, char **argv) {

//    #define DEFINED_RATE 0.175
    const double RATE_CONST = 0.175;
    
    double subTotal;
    double tax;
    double grandTotal;
    double rate;

    rate = 0.175;
    subTotal = 200;
    tax = subTotal * RATE_CONST;
    grandTotal = subTotal + tax;

    printf("The tax on %.2f is %.2f, so the grand total is %.2f.\n", subTotal, tax, grandTotal);
    return 0;
}