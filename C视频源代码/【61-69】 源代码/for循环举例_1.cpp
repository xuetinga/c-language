/*
	2009��10��21��15:47:19
	��1��100֮�����е�����֮��
*/

# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;  //=0����ʡ

	for (i=1; i<100; i+=2) //i+=2; �ȼ��� i = i + 2;  ��ͨ����дi+=2 ��дi = i+2
	{
		sum = sum + i;
		//printf("�����Һܸ���!\n");
	}

	printf("i = %d\n", i);
	printf("sum = %d\n", sum);

	return 0;
}