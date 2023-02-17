#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers go there */
/* betty style doc for function main goes there */
/**
 * main-Entry point
 * 
 * Return: Always 0 (success)
 */
init main(void)
{
	init n;

	srand(time(0))
		n=rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n>0)
		printf("%d is positive\n", n
				else if (n==0)
				print("%d is zero\n", n);
				else 
				printf("%d is negative\n", n);
				return (0);
}
