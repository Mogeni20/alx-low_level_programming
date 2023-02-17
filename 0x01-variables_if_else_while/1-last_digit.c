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
	char output[] = "Last digit of %d is %d ", n, n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%s", output);
	if (n % 10 > 5)
		printf("and is greater than 5\n");
	else if (n % 10 == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");
return (0);
}
