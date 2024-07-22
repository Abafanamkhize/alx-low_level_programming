#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int op1, op2;

    for (int h = 0; h < 10; h++)
    {
        for (int g = 0; g < 10; g++)
        {
            for (int e = 0; e < 10; e++)
            {
                for (int i = 0; i < 10; i++)
                {
                    op1 = (h * 10) + g;
                    op2 = (e * 10) + i;
                    
                    if (op1 < op2)
                    {
                        printf("%d%d %d%d", h, g, e, i);
                        
                        if (h == 9 && g == 8 && e == 9 && i == 9)
                            break; // Break if we reach the last combination (99 98)
                        
                        printf(", ");
                    }
                }
            }
        }
    }
    
    printf("\n");
    return 0;
}
