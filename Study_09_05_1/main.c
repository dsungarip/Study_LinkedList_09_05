//선수학습

#include <stdio.h>

struct Student {	//사용자 정의 데이터 타입
	char name[50];
	int age;
	int grade;
};

int main()
{
	// 서로 연관성 있는 데이터를 하나로 묶어주는 기능 == 구조체

	struct Student a;

	a.name[0] = 'M';
	a.name[1] = 'O';
	a.name[2] = 'N';
	a.name[3] = '\0';

	a.age = 13;
	a.grade = 3;

	printf("이름 : %s\n학년 : %d\n나이 : %d\n", a.name, a.grade, a.age);



	(&a)->name[0] = 'A';
	(&a)->name[1] = 'B';
	(&a)->name[2] = 'C';
	(&a)->name[3] = '\0';

	(&a)->age = 15;
	(&a)->grade = 2;
	printf("이름 : %s\n학년 : %d\n나이 : %d\n", a.name, a.grade, a.age);

	return 0;
}