#include <stdio.h>

// UDF to find length of a string using pointer
int findLength(char *str)
{
    int count = 0;

    while (*str != '\0')
    {
        count++;
        str++;   // move pointer to next character
    }

    return count;
}

int main()
{
    char str[5][50];   // 2D array for multiple strings
    int i, n;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    // Input strings
    for (i = 0; i < n; i++)
    {
        printf("Enter string %d: ", i + 1);
        scanf("%s", str[i]);
    }

    // Display length of each string
    for (i = 0; i < n; i++)
    {
        printf("Length of string %d is: %d\n",
               i + 1,
               findLength(str[i]));
    }

    return 0;
}
