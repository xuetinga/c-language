/*
	2009��11��24��9:17:43
	ͨ��������ɶԽṹ���������������
*/


# include <stdio.h>
# include <string.h>

struct Student
{
	int age;
	char sex;
	char name[100];
}; //�ֺŲ���ʡ

void InputStudent(struct Student *);
void OutputStudent(struct Student ss);
int main(void)
{
	struct Student st;  //15��

	InputStudent(&st); //�Խṹ���������  ���뷢��st�ĵ�ַ
//	printf("%d %c %s\n", st.age, st.sex, st.name);
	OutputStudent(st); //�Խṹ��������  ���Է���st�ĵ�ַҲ����ֱ�ӷ���st������

	return 0;
}

void OutputStudent(struct Student ss)
{
	printf("%d %c %s\n", ss.age, ss.sex, ss.name);
}

void InputStudent(struct Student * pstu) //pstuֻռ4���ֽ�
{
	(*pstu).age = 10;
	strcpy(pstu->name, "����");
	pstu->sex = 'F';	
}

/*
//�������޷��޸�������15��st��ֵ ���Ա������Ǵ����
void InputStudent(struct Student stu)
{
	stu.age = 10;
	strcpy(stu.name, "����");  //����д�� stu.name = "����";
	stu.sex = 'F';
}
*/