# include <stdio.h>

int main(void)
{
	int i, j;

	for (i=0; i<3; ++i)
	{
		for (j=1; j<4; ++j)
			break;  //breakֻ����ֹ�����������ѭ��
		printf("ͬ־�Ǻ�!\n");
	}

	return 0;
}