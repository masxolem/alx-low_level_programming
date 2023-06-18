#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* Main- give a random number if teh number is greater than zero printf print is positive*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else	
		printf("%d is zero\n", n);		
	return (0);
}
