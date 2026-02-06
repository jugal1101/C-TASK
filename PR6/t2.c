#include <stdio.h>

int main()
{
    char str[] = "development";
    int freq[256] = {0};   // ASCII frequency array
    int i = 0;

    // Count frequency
    while (str[i] != '\0')
    {
        freq[str[i]]++;
        i++;
    }

    // Display result
    printf("Character frequency:\n");
    for (i = 0; i < 256; i++)
    {
        if (freq[i] != 0)
        {
            printf("%c = %d\n", i, freq[i]);
        }
    }

    return 0;
}
