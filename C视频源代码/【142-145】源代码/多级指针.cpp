# include <stdio.h>

int main(void)
{
	int i = 10;
	int * p = &i;  //pֻ�ܴ��int���ͱ����ĵ�ַ
	int ** q = &p;  //q��int **���ͣ� ��νint **���;���ָqֻ�ܴ��int *���ͱ����ĵ�ַ�� 	
	int *** r = &q;  //r��int ***����, ��νint ***���;���ָrֻ�ܴ��int ** ���ͱ����ĵ�ַ, 

	//r = &p;  //error ��Ϊr��int *** ���ͣ�rֻ�ܴ��int **���ͱ����ĵ�ַ
	printf("i = %d\n", ***r); //��������10  ֻ�� ***r�ű�ʾ����i, *r�� **r�� ****r����Ķ�����i

	return 0;
}