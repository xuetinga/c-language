# include <stdio.h>

//ֻ������һ���������ͣ���û�ж�������� ���������͵������� enum WeekDay
enum WeekDay
{
	MonDay, TuesDay, WednesDay, ThursDay, FriDay, SaturDay, SunDay
};

int main(void)
{
	//int day; //day�����int���Ͳ�����
	enum WeekDay day = SunDay;
	printf("%d\n", day);

	return 0;
}