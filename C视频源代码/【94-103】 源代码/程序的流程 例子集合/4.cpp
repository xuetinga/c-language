# include <stdio.h>

int main(void)
{
    int  i=0, s=0;
	
	do
	{ 
		if(i%2)
		{
			i++;
			continue;  //������11��ȥִ��
		}
		i++;
		s+=i;  // s = s + i;
	}while(i < 5);  //11��
	
	printf("%d\n",s);   
	
	return 0;
}
