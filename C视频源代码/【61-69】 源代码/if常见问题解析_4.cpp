# include <stdio.h>

int main(void)
{
	float score; //score����

	printf("���������Ŀ��Գɼ�: ");
	scanf("%f", &score);

	if (score > 100)
		printf("��������!\n");
	else if (score>=90 && score<=100) //����д�� 90<=score<=100
		printf("����!\n");
	else if (score>=80 && score<90)
		printf("����!\n");
	else if (score>=60 && score<80)
		printf("����!\n");
	else if (score>=0 && score<60)  //if����ʡ����������
		printf("������! ����Ŭ��!\n");
	
	
	return 0;
}
/*
�ܽ�
if (���ʽ1)
	A;
else if (���ʽ2)
	B;
else if (���ʽ3)
	C;
else (���ʽ4)  //7��
	D;

����д�ǲ��Եģ���ȷ��д���ǣ�
	Ҫôȥ��7�е�(���ʽ4)
	Ҫô��7�е�else �����if 

*/