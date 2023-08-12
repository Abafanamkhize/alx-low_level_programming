#include <stdio.h>

int main(void)
{
    char c;

    // Print the alphabet without 'q' and 'e'
    for (c = 'a'; c <= 'z'; c++)
    {
        if (c != 'e' && c != 'q')
        {
            putchar(c);
        }
    }

    // Print a newline character
    putchar('\n');

    return 0;
}

