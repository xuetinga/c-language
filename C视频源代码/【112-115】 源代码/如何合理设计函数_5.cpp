/*
	2009��11��4��11:56:29
	������������ʵ����1��ĳ������֮�����е����������������
	������ �� ��κ�����ƺ���_4.cpp ��Ƚ�
	���������٣��������Ը���
*/


# include <stdio.h>

//�������Ĺ�����: �ж�m�Ƿ����������Ƿ���true�����Ƿ���false
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

//�������Ĺ����ǰ�1��n֮�����е���������ʾ�������
void TraverseVal(int n)
{
	int i;

	for (i=2; i<=n; ++i)
	{
		if ( IsPrime(i) )
			printf("%d\n", i);
	}
}

int main(void)
{
	int val;
 
	scanf("%d", &val);
	TraverseVal(val);

	return 0;
}