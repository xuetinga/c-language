# include <stdio.h>

//��һ�ַ�ʽ
struct Student
{
	int age;
	float score;
	char sex;
};

//�ڶ��ַ�ʽ
struct Student2
{
	int age;
	float score;
	char sex;
} st2;

//�����ַ�ʽ
struct 
{
	int age;
	float score;
	char sex;
} st3;

int main(void)
{
	struct Student st = {80, 66.6, 'F'};	

	return 0;
}