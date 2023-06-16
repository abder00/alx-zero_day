#include <stdio.h>

int main(void)
{
    int ch;

    // Printing lowercase alphabet
    for (ch = 'a'; ch <= 'z'; ch++)
        putchar(ch);

    // Printing uppercase alphabet
    for (ch = 'A'; ch <= 'Z'; ch++)
        putchar(ch);

    putchar('\n'); // Printing a new line

    return 0;
}
