# include <stdio.h>

int main(void)
{
	int i = 5;
	int j = 10;
	int * p = &i;
	int * q = &j;
	int a[5];
	p = &a[1];
	q = &a[4];
	printf("p��q��ָ��ĵ�Ԫ���%d����Ԫ\n", q-p);

	//p - q û��ʵ������

	return 0;
}