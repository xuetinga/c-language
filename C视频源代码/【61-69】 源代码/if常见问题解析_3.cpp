# include <stdio.h>

int main(void)
{
	if (3 > 2)
		printf("AAAA\n");
	else if (3 > 1)
		printf("BBBB\n");
	else
		printf("CCCC\n");

	return 0;
}
/*
	��Vc++6.0�е���������:
---------------
AAAA
---------------
	�ܽ�:
if (���ʽ1)
	A;
else if (���ʽ2)
	B;
else if (���ʽ3)
	C;
else
	D;

������ʽ1��2��������Ҳֻ��ִ��A���

*/