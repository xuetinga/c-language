# include <stdio.h>

int main(void)
{
	if (1 > 2)
		printf("AAAA\n");
	else if (1 > 5)
		printf("BBBB\n");
	else (5 > 10);  //��ʵ����������
		printf("CCCC\n");

		/*
			else (5 > 10);  //��ʵ����������
				printf("CCCC\n");
		
			�ȼ���
			else 
				(5 > 10);  //��ʵ����������
			printf("CCCC\n");
		*/


	return 0;
}
/*
	�ܽ�:
if (���ʽ1)
	A;
else if (���ʽ2)
	B;
else if (���ʽ3)
	C;
else (���ʽ4);  
	D;

����д�﷨����������߼����Ǵ����

else (���ʽ4);  
	D;
�ȼ���
else 
	(���ʽ4);  
D;

*/
