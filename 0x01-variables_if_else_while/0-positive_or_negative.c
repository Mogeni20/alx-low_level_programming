#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d", n);
	if (n > 0)
{
		printf("%d\n is positive");
}
	else
	if (n == 0)
{
		printf("%d\n is zero");
}
	else
{
		printf("%d\n is negative");
}
	return (0);
}
