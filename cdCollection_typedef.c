#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CDS 4
/*
typedef struct cd CD;

struct cd {
    char name[50];
    char artist[50];
    int trkCount;
    int rating;
};
*/
typedef char Str50[50];

typedef struct cd {
    Str50 name;
    Str50 artist;
    int trkCount;
    int rating;
} CD;

// struct cd cdCollection[CDS];
CD cdCollection[CDS];

void c_cdCollection() {
    strcpy(cdCollection[0].name, "Great Hits");
    strcpy(cdCollection[0].artist, "Polly Darton");
    cdCollection[0].trkCount = 20;
    cdCollection[0].rating = 10;

    strcpy(cdCollection[1].name, "Mega Songs");
    strcpy(cdCollection[1].artist, "Lady Googoo");
    cdCollection[1].trkCount = 18;
    cdCollection[1].rating = 7;

    strcpy(cdCollection[2].name, "The Best Ones");
    strcpy(cdCollection[2].artist, "The Warthogs");
    cdCollection[2].trkCount = 24;
    cdCollection[2].rating = 4;

    strcpy(cdCollection[3].name, "Songs From The Shows");
    strcpy(cdCollection[3].artist, "The Singing Swingers");
    cdCollection[3].trkCount = 22;
    cdCollection[3].rating = 9;
}

void d_cdCollection() {
    int i;
    // struct cd thisCd;
    CD thisCd;
    for (i = 0; i < CDS; i++) {
        thisCd = cdCollection[i];
        printf("CD #%d: '%s' by %s has %d tracks. I rated it %d\n", i, thisCd.name, thisCd.artist, thisCd.trkCount, thisCd.rating);
    }
}

int main(int argc, char **argv) {
    c_cdCollection();
    d_cdCollection();
    return 0;
}