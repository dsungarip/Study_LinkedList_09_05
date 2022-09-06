//선수학습

#include <stdio.h>
#include <stdlib.h>

typedef struct tagStudent {	
	char name[50];
	int age;
	int grade;
}Student;

int main()
{
	Student* st = (Student*)malloc(sizeof(Student));	//동적할당

	st->name[0] = 'A';	//주소를 통해 접근할때에는 .이아닌 -> 연산자를 써야함
	st->name[1] = '\0';

	st->age = 3;
	st->grade = 2;

	printf("이름 : %s\n나이 : %d\n학년 : %d\n", st->name, st->age, st->grade);

	free(st);	//반납안하면 계속 메모리 할당된 상태 (메모리누수현상 발생)

	return 0;
}