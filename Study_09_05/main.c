//�����н�

#include <stdio.h>
int main()
{
	int a;	//4byte �������� �Ҵ�, �ּ��� �̸��� a

	a = 20;	//a �ּҿ� 20 ������ ����

	printf("a������ �޸��ּ� = %p\n", &a);
	printf("a������ �޸𸮰� = %d\n", a);


	// �������� : �޸𸮰����� �ּҰ��� �����ϴ� DataType

	int* pa;
	pa = &a;

	int** ppa;
	ppa = &pa;

	// �Ʒ��� ��� ������ ���� ����Ų��.
	**ppa;
	**&pa;
	*pa;
	*&a;
	a;
	printf(" &**ppa = %p\n &**&pa = %p\n &*pa = %p\n &*&a = %p\n &a = %p\n", &**ppa, &**&pa, &*pa, &*&a, &a);
	printf(" **ppa = %d\n **&pa = %d\n *pa = %d\n *&a = %d\n a = %d\n", **ppa, **&pa, *pa, *&a, a);

	return 0;
}