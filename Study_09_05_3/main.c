//�����н�

#include <stdio.h>
#include <stdlib.h>

int add(int a, int b) { return a + b; }	
int sub(int a, int b) { return a - b; }
int calculator(int(*pfunc)(int, int), int a, int b)	//�Լ� ������
{
	return pfunc(a, b);
}

int main()
{
	int a = 20;
	int b = 30;


	//�Լ� ������ ����
	int(*pfunc)(int, int);	//��������(*�����̸�)(����);

	pfunc = add;

	int ret = pfunc(a, b);	//�Լ������� ������ �Լ��� ȣ���Ҽ� �ִ�.
	printf("%d + %d = %d\n", a, b, ret);

	int ret2 = calculator(sub, a, b);	//�Լ������ͷ� �Լ��� �Լ��� ������ �ִ�.����
	printf("%d - %d = %d\n", a, b, ret2);

	return 0;
}