/*
	2009��10��23��9:41:49
	�����򲻶ԣ� ��Ϊѭ���и��µı������ܶ���ɸ�����
*/

# include <stdio.h>

int main(void)
{
	float i;
	float sum = 0;  

	for (i=1.0; i<=100; ++i)
	{
		sum = sum + 1/i;
	}
	printf("sum = %f\n", sum);  

	return 0;
}