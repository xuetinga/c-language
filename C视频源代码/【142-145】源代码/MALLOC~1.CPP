# include <stdio.h>
# include <malloc.h>

int main(void)
{
//	int k;
	int * p = (int *)malloc(4);  
		/*
			malloc�����ķ���ֵ��void *
			void * Ҳ�иɵ�ַ  ��ν�ɵ�ַ������ʵ������ĵ�ַ
		*/

	free(p); //��pָ����ڴ��ͷ�

	return 0;
}