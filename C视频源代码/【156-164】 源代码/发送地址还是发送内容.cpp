/*
	2009��11��24��9:17:43
	ʾ��:
		���͵�ַ���Ƿ�������
	Ŀ��:
		ָ����ŵ�֮һ:
			���ٵĴ������ݣ�
			�����ڴ�С
			ִ���ٶȿ�
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
void OutputStudent(struct Student *);
int main(void)
{
	struct Student st ;  //15��
	//printf("%d\n", sizeof(st));

	InputStudent(&st); //�Խṹ���������  ���뷢��st�ĵ�ַ
	OutputStudent(&st); //�Խṹ��������  ���Է���st�ĵ�ַҲ����ֱ�ӷ���st������ ��Ϊ�˼����ڴ�ĺķѣ�ҲΪ�����ִ���ٶȣ��Ƽ����͵�ַ

	return 0;
}

void OutputStudent(struct Student *pst)
{
	printf("%d %c %s\n", pst->age, pst->sex, pst->name);
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