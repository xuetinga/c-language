/*
	��ö�ٵ�Ӧ��!
*/
# include <stdio.h>

enum weekday
{
	MonDay, TuesDay, WednesDay, ThursDay, FriDay, SaturDay, SunDay //���ǽ�WednesDay��ΪWednesDay = 5֮��MonDay��SunDay��ֵ�Ƕ��٣�
};

void f(enum weekday i) //��������Ŀ��ֻ����������0��6֮������֣����β�i����Ϊö���ͣ�������Ч�ı��⴫��ʧ�������
{
	switch (i)
	{
	case 0:
		printf("MonDay!\n");
		break;
	case 1:
		printf("TuesDay!\n");
		break;
	case 2:
		printf("WednesDay!\n");
		break;
	case 3:
		printf("ThursDay!\n");
		break;
	case 4:
		printf("FriDay!\n");
		break;
	case 5:
		printf("SaturDay!\n");
		break;
	case 6:
		printf("SunDay!\n");
		break;  
	}          
}

int main(void)
{
	f(FriDay); //��ȻFriDay�����Ͼ���5����ֱ��д��f(5);���Ǵ�ģ� Ҳ����д��f(10); ����Ϊʲô�� �ٺ�

	return 0;
}