# include <stdio.h>

int main(void)
{
	int a[5]; //a��������  5������Ԫ�صĸ��� Ԫ�ؾ��Ǳ���  a[0]  -- a[4]
//	int a[3][4]; //3��4�� a[0][0]�ǵ�һ��Ԫ�� a[i][j]��i+1��j+1��
	int b[5];
	
	//a = b;//error a�ǳ���
	printf("%#X\n", &a[0]);
	printf("%#X\n", a);

	return 0;
}
/*
	��Vc++6.0�е���������:
--------------
0X12FF6C
0X12FF6C
Press any key to continue
--------------
	�ܽ᣺
		һά������
					һά�������Ǹ�ָ�볣��
					����ŵ���һά�����һ��Ԫ�صĵ�ַ

*/