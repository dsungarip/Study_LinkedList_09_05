//선수학습

#include <stdio.h>
int main()
{
	int a;	//4byte 정수공간 할당, 주소의 이름은 a

	a = 20;	//a 주소에 20 데이터 대입

	printf("a변수의 메모리주소 = %p\n", &a);
	printf("a변수의 메모리값 = %d\n", a);


	// 포인터형 : 메모리공간의 주소값을 저장하는 DataType

	int* pa;
	pa = &a;

	int** ppa;
	ppa = &pa;

	// 아래는 모두 동일한 값을 가리킨다.
	**ppa;
	**&pa;
	*pa;
	*&a;
	a;
	printf(" &**ppa = %p\n &**&pa = %p\n &*pa = %p\n &*&a = %p\n &a = %p\n", &**ppa, &**&pa, &*pa, &*&a, &a);
	printf(" **ppa = %d\n **&pa = %d\n *pa = %d\n *&a = %d\n a = %d\n", **ppa, **&pa, *pa, *&a, a);

	return 0;
}