# include <stdio.h>

void f(int * pArr, int len)
{
	int i;
	for (i=0; i<len; ++i)
		printf("%d  ",  pArr[i]);  //*(pArr+i) �ȼ��� pArr[i]  Ҳ�ȼ��� b[i] Ҳ�ȼ��� *(b+i) 

	printf("\n");
}

int main(void)
{
	int b[6] = {-1,-2,-3,4,5,-6};

	f(b, 6);

	b[i]

	return 0;
}