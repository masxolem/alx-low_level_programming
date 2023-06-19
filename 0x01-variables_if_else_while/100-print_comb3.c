#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main()
{
    int i, j;
    
    for (i = 0; i <= 9; i++)
    {
        for (j = i + 1; j <= 9; j++)
       	{
            putchar('0' + i);
            putchar('0' + j);
            
            if (i != 8 || j != 9)
	    {
                putchar(',');
                putchar(' ');
            }
        }
    }
    
    return 0;
}
