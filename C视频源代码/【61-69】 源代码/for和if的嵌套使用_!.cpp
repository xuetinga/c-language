/*
	2009��10��21��15:51:16
	��1��100֮�����е��ܱ�3����������֮��
*/

# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;  // =0����ʡ

	for (i=3; i<=100; ++i)
	{
		if (i%3 == 0)//��� i�ܱ�3����
			sum = sum + i;
		printf("sum = %d\n", sum);
	}
	
	return 0;
}