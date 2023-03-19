#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
*main- prints if the last digit of the number is greater than 5, is 0, or
* is less than 6 and not 0
*
*Descripton: Using the main function, this program prints if the last
*digit of the number is greater than 5, is 0, or is less than 6 and
*not 0
*Return: ALways 0
*/

int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	l = n % 10;

if (l > 5)
	{
	printf("Last digit of %d is %d and is greater than 5", n, l);
	}
else if ((l < 6) && (l != 0))
	{
	printf("Last digit of %d is %d and is less than 6 and not 0", n, l);
	}
else if (l == 0)
	{
	printf("Last digit of %d is %d and is 0", n, l);
	}
return (0);
}
