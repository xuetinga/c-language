# include <stdio.h>

int f(void)  //�����е�void��ʾ�ú������ܽ�������  int��ʾ��������ֵ��int���͵�����
{
	return 10; //��������������10
}

void g(void)  //8��  ������ǰ���void��ʾ�ú���û�з���ֵ
{
//	return 10; //error ��8�����׵�void��ì��
}

int main(void)
{
	int j = 88;

	j = f();
	printf("%d\n", j);

//	j = g(); //error ��Ϊg����û�з���ֵ

	return 0;
}