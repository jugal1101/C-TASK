#include <stdio.h>

int main() {
    char ch = 'A';

    printf("Alphabets (Skipping 3 letters each time):\n\n");

    do {
        printf("%c ", ch);
        ch = ch + 4;   // print 1, skip next 3
    } while (ch <= 'Z');

    return 0;
}
