#include  <stdio.h>
/**
 * main -Edit point
 * This program prints fibonacci
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	long int s1, s2, s;

	s1 = 0;
	s2 = 1;
	i = 1;
	while (i <= 50)
	{
		s = s1 + s2;
		s1 = s2;
		s2 = s;
		if (i == 50)
		{
			printf("%ld\n", s);
		}
		else
		{
			printf("%ld, ", s);
		}
		i++;
	}
	return (0);
}
