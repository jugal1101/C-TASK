#include <stdio.h>

int main() {
    int arr[2][5];
    int i, j;
    int largest;

    printf("Enter 10 elements for 2D array (2x5):\n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    largest = arr[0][0];

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 5; j++) {
            if (arr[i][j] > largest) {
                largest = arr[i][j];
            }
        }
    }

    printf("Largest element is: %d\n", largest);

    return 0;
}