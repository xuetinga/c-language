# include <stdio.h>

void swap_3(int * p, int * q) //�β�������p��q������ʵ�����ݵ���p��q��������*p��*q
{
	int t;
	t = *p; *p = *q; *q = t;
}


int main(void)
{
	int a = 3;
	int b = 5;

	swap_3(&a, &b);
	printf("a = %d, b = %d\n", a, b);

	return 0;
}

void swap_1(int i, int j)
{
	int t;

	t = i; i = j; j = t;
}

void swap_2(int * p, int * q) //�β�������p��q������ʵ�����ݵ���p��q��������*p��*q
{
	int * t;
	t = p; p = q; q = t;
}