#include <stdio.h>

int main() {
    int a[10][10];
    int i, j, rows, cols;
    int row_no, col_no;
    int row_sum = 0, col_sum = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter row number to find sum (0 to %d): ", rows - 1);
    scanf("%d", &row_no);

    printf("Enter column number to find sum (0 to %d): ", cols - 1);
    scanf("%d", &col_no);

    printf("\nElements of row %d:\n", row_no);
    for (j = 0; j < cols; j++) {
        printf("%d ", a[row_no][j]);
        row_sum += a[row_no][j];
    }

    printf("\nSum of row %d = %d\n", row_no, row_sum);

    printf("\nElements of column %d:\n", col_no);
    for (i = 0; i < rows; i++) {
        printf("%d ", a[i][col_no]);
        col_sum += a[i][col_no];
    }

    printf("\nSum of column %d = %d\n", col_no, col_sum);

    return 0;
}