/*
	2009��11��14��10:45:51
	һ��Ҫ���� 10�е�pArr[3] ��17�� 19�е�a[3] ��ͬһ������
*/

# include <stdio.h>

void f(int * pArr, int len)
{
	pArr[3] = 88;  //10��
}

int main(void)
{
	int a[6] = {1,2,3,4,5,6};
	
	printf("%d\n", a[3]);  //17��
	f(a, 6);
	printf("%d\n", a[3]);  //  19��

	return 0;
}
/*
	��Vc++6.0�е���������:
---------------------------
4
88
Press any key to continue
---------------------------
*/