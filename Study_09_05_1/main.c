//�����н�

#include <stdio.h>

struct Student {	//����� ���� ������ Ÿ��
	char name[50];
	int age;
	int grade;
};

int main()
{
	// ���� ������ �ִ� �����͸� �ϳ��� �����ִ� ��� == ����ü

	struct Student a;

	a.name[0] = 'M';
	a.name[1] = 'O';
	a.name[2] = 'N';
	a.name[3] = '\0';

	a.age = 13;
	a.grade = 3;

	printf("�̸� : %s\n�г� : %d\n���� : %d\n", a.name, a.grade, a.age);



	(&a)->name[0] = 'A';
	(&a)->name[1] = 'B';
	(&a)->name[2] = 'C';
	(&a)->name[3] = '\0';

	(&a)->age = 15;
	(&a)->grade = 2;
	printf("�̸� : %s\n�г� : %d\n���� : %d\n", a.name, a.grade, a.age);

	return 0;
}