#include <stdio.h>

int main() {
    int i, j, space;
    int rows = 4; 

    for (i = rows; i >= 1; i--) {


        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        for (j = 1; j <= i * 2; j++) {
            if (j % 2 == 1)
                printf("1");
            else
                printf("0");
        }

        printf("\n");
    }

    return 0;
}
