# include <stdio.h>

int main(void)
{
	int val; //��Ŵ��жϵ�����
	int m;
	int sum = 0;

	printf("����������Ҫ�жϵ�����:  ");
	scanf("%d", &val);
	
	m = val;
	while (m)
	{
		sum = sum * 10 + m%10;
		m /= 10;
	}

	if (sum == val)
		printf("Yes!\n");
	else
		printf("No!\n");

	return 0;
}