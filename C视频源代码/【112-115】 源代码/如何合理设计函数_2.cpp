/*
	2009��11��4��11:18:51
	�ж�һ�������Ƿ�������
	�õ����ĺ�����ʵ��, ����Ŀ����������	
*/

# include <stdio.h>

bool IsPrime(int val)
{
	int i;

	for (i=2; i<val; ++i)
	{
		if (0 == val%i)
			break;
	}
	if (i == val)
		return true;
	else
		return false;
}

int main(void)
{
	int val;
	int i;

	scanf("%d", &val);
	if ( IsPrime(val) )
		printf("Yes!\n");
	else
		printf("No!\n");

	return 0;
}