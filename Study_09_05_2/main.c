//�����н�

#include <stdio.h>
#include <stdlib.h>

typedef struct tagStudent {	
	char name[50];
	int age;
	int grade;
}Student;

int main()
{
	Student* st = (Student*)malloc(sizeof(Student));	//�����Ҵ�

	st->name[0] = 'A';	//�ּҸ� ���� �����Ҷ����� .�̾ƴ� -> �����ڸ� �����
	st->name[1] = '\0';

	st->age = 3;
	st->grade = 2;

	printf("�̸� : %s\n���� : %d\n�г� : %d\n", st->name, st->age, st->grade);

	free(st);	//�ݳ����ϸ� ��� �޸� �Ҵ�� ���� (�޸𸮴������� �߻�)

	return 0;
}