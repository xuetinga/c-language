# include <stdio.h>

int main(void)
{
	int val;

	printf("��������Ҫ�����¥��: ");
	scanf("%d", &val);

	switch (val)
	{
	case 1:
		printf("1�㿪!\n");
		break;
	case 2:
		printf("2�㿪!\n");
		//break;
	case 3:
		printf("3�㿪!\n");
		break;
    default:
		printf("û�иǵ���һ��!\n");
		break;
	}

	return 0;
}