# include <stdio.h>

int main()
{ 
	int x=1, y=0, a=0, b=0;
	switch(x) // ��һ��switch 
	{  
	case 1:  
		switch(y)  // �ڶ���switch 
		{  
		case 0:  
			a++; 
			break; //��ֹ���ǵڶ���switch  
		case 1:  
			b++; 
			break;
		}
		b = 100;
		break;   //��ֹ���ǵ�һ��switch
	case 2: 
		a++;    
		b++;
		break;  
	}	
	printf("%d %d\n",a,b); //26��
	
	return 0;
}
