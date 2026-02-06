#include <stdio.h>

// UDF to calculate cube using pointer
void cubeElements(int *ptr, int rows, int cols)
{
    int i;

    for (i = 0; i < rows * cols; i++)
    {
        *(ptr + i) = (*(ptr + i)) * (*(ptr + i)) * (*(ptr + i));
    }
}

int main()
{
    int a[2][2] = {3, 2, 5, 4};
    int i, j;

    // Call UDF (passing base address)
    cubeElements(&a[0][0], 2, 2);

    // Display result
    printf("Cube of all elements:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
