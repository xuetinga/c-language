/*
	2009��11��4��11:18:51
	��1��ĳ������֮��(����������)���е����������������
	��1���������ж�һ�������Ƿ�������
		�ŵ�:
			�����  �����ƺ���_3.cpp  ���������
			����Ŀ������Ա�  �����ƺ���_3.cpp ��
		ȱ�㣺
			����������Ȼ���Ƿǳ��ߣ�
			������1000�����֣�������ÿ�����ִ�1�������������
			��
					for (i=2; i<=val; ++i)
					{
						if ( IsPrime(i) )
							printf("%d\n", i);
					}
			Ҫд1000��
	
*/

# include <stdio.h>

bool IsPrime(int m)
{
	int i;
		
	for (i=2; i<m; ++i)
	{
		if (0 == m%i)
			break;
	}
	if (i == m)
		return true;
	else
		return false;

}

int main(void)
{
	int val;
	int i;
 
	scanf("%d", &val);
	for (i=2; i<=val; ++i)
	{
		if ( IsPrime(i) )
			printf("%d\n", i);
	}

	return 0;
}