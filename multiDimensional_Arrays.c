#include <stdio.h>

int grid [3][5] = {
    {1,  2,  3,  4,  5 },
    {6,  7,  8,  9,  10},
    {11, 12, 13, 14, 15}
};

int main(int argc, char **argv) {
    int row;
    int col;
    for (row = 0; row < 3; row++) {
        printf( "--- row %d --- \n", row);
        for (col = 0; col < 5; col++) {
            printf("col[%d], value=%d\n", col, grid[row][col]);
        }
    }
    return 0;
}