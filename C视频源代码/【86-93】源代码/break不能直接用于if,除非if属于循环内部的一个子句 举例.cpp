# include <stdio.h>

int main(void)
{
	int i;
/*
	switch (2)
	{
	case 2:
		printf("����!\n");
		break;  //OK, break��������switch
	}

*/
	
	for (i=0; i<3; ++i )
	{
		if (3 > 2)
			break;  //break��Ȼ��if�ڲ�����䣬��break��ֹ��ȷ���ⲿ��forѭ��
		printf("�ٺ�!\n");
	}

	return 0;
}