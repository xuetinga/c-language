/*
	2009��11��4��11:18:51
	�ж�һ�������Ƿ�������
	ֻ��һ������ʵ��,���ã�����������ʲ���	
*/

# include <stdio.h>

int main(void)
{
	int val;
	int i;

	scanf("%d", &val);
	for (i=2; i<val; ++i)
	{
		if (0 == val%i)
			break;
	}
	if (i == val)
		printf("Yes!\n");
	else
		printf("No!\n");

	return 0;
}