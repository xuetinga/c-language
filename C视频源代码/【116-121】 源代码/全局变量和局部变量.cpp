/*
	2009��11��6��9:33:02
	һ��Ҫ���׸ó���Ϊʲô�Ǵ�ģ�
	ҲҪ���װ�9��12�д������14�к��棬Ϊʲô�����OK��
*/

# include <stdio.h>

void g()  //9
{
	printf("k = %d\n", k);
} //12

int k = 1000;  //14��

void f(void)
{
	g();
	printf("k = %d\n", k);
}

int main(void)
{
	f();
	return 0;
}