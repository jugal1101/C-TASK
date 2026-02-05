#include <stdio.h>

int main() {
    int arr[10], i, j, n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Negative elements in the array are:\n");

    for (i = 0; i < n; i++) {
        for (j = i; j <= i; j++) {   // nested loop
            if (arr[j] < 0) {
                printf("%d ", arr[j]);
            }
        }
    }

    return 0;
}