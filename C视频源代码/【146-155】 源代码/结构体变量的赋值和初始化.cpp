# include <stdio.h>

//��һ�ַ�ʽ
struct Student
{
	int age;
	float score;
	char sex;
};

int main(void)
{
	struct Student st = {80, 66.6, 'F'}; //��ʼ��  �����ͬʱ����ֵ
	struct Student st2;
	st2.age = 10;
	st2.score = 88;
	st2.sex = 'F';

	printf("%d %f %c\n", st.age, st.score, st.sex);
	printf("%d %f %c\n", st2.age, st2.score, st2.sex);
	

	return 0;
}