# include <stdio.h>

int main(void)
{ 
	int a=1,b;
	
	for(b=1; b<=10; b++)
	{
		if(a >= 8)
			break;  //������18��
		if(1 == a%2)
		{
			a += 5;
			continue;   //������7��ִ��b++
		}
		a -= 3;
	}
	printf("b = %d\n",b);
}
