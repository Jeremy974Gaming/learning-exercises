#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum days {
    Monday, Tuesday, Wedensday, Thursday, Friday, Saturday, Sunday
};

enum suits {
    Hearts, Diamonds, Clubs, Spades
};

enum numbers {
    Couple = 2, Dozen = 12, Score = 20
};

void showDayType(enum days day) {
    if ((day == Saturday) || (day ==Sunday)) {
        printf("It's the weekend !\n");
    } else {
        printf("It's a working day.\n");
    }
}

void showCard(enum suits card) {
    if ((card == Hearts) || (card == Diamonds)) {
        printf("This card is red (in suit #%d).\n", card);
    } else {
        printf("This is a black card.\n");
    }
}

void bulkPurchase(enum numbers num) {
    printf("The customer wants to buy %d items.\n", num);
}

int main(int argc, char **argv) {
    enum days today;
    enum suits playingCard;
    enum numbers num;
    today = Thursday;
    playingCard = Hearts;
    num = Score;
    showDayType(today);
    showCard(playingCard);
    bulkPurchase(num);
    return 0;
}