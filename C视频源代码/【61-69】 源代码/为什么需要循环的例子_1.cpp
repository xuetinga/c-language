/*
	2009��10��21��15:16:13
	1+2+3+4+....+100
*/

# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;

	for (i=1; i<=100; ++i)
		sum = sum + i;

	printf("sum = %d\n", sum);

	return 0;
}