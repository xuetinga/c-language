# include <stdio.h>

struct Student
{
	int age;
	char sex;
	char name[100];
}; //�ֺŲ���ʡ

int main(void)
{
	struct Student st = {20, 'F', "С��"};
	struct Student * pst = &st;
	
	printf("%d %c %s\n", st.age, st.sex, st.name);
	printf("%d %c %s\n", pst->age, pst->sex, pst->name);  //pst->age ת���� (*pst).age �ȼ��� st.age

	return 0;
}