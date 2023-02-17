#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	char output[] = "Last digit of n is ";

	printf("%d\n ", n);
	if (n > 5)
{
	printf("%s and greater than 5\n", output);
}
	if (n == 0)
{
	printf("%s and is 0\n", output);
}
	if (n % 10 < 6 && n % 10 != 0)
{
	printf("%s and is less than 6 and not 0\n", output);
}
	return (0);
}
