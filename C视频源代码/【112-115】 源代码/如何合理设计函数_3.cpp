/*
	2009��11��4��11:18:51
	��1��ĳ������֮��(����������)���е����������������
	ֻ��main����ʵ�֣��о����ԣ�
		1. ����������Բ���
		2. ���벻�������		
*/

# include <stdio.h>

int main(void)
{
	int val;
	int i;
	int j;

	scanf("%d", &val);
	for (i=2; i<=val; ++i)
	{
		//�ж�i�Ƿ�������������������ǲ����
		for (j=2; j<i; ++j)
		{
			if (0 == i%j)
				break;
		}
		if (j == i)
			printf("%d\n", i);
	}

	return 0;
}