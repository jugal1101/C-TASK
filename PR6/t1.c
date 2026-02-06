#include <stdio.h>

// UDF to check palindrome
int isPalindrome(char str[])
{
    int i = 0, j = 0;

    // Find length manually
    while (str[j] != '\0')
    {
        j++;
    }
    j--;   // last character index

    // Compare characters
    while (i < j)
    {
        if (str[i] != str[j])
        {
            return 0;   // Not palindrome
        }
        i++;
        j--;
    }

    return 1;   // Palindrome
}

int main()
{
    char str[50];

    printf("Enter a string: ");
    scanf("%s", str);

    if (isPalindrome(str))
        printf("String is Palindrome");
    else
        printf("String is Not Palindrome");

    return 0;
}
