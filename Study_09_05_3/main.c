//선수학습

#include <stdio.h>
#include <stdlib.h>

int add(int a, int b) { return a + b; }	
int sub(int a, int b) { return a - b; }
int calculator(int(*pfunc)(int, int), int a, int b)	//함수 포인터
{
	return pfunc(a, b);
}

int main()
{
	int a = 20;
	int b = 30;


	//함수 포인터 변수
	int(*pfunc)(int, int);	//리턴형식(*변수이름)(인자);

	pfunc = add;

	int ret = pfunc(a, b);	//함수포인터 변수로 함수를 호출할수 있다.
	printf("%d + %d = %d\n", a, b, ret);

	int ret2 = calculator(sub, a, b);	//함수포인터로 함수에 함수를 넣을수 있다.갸꿀
	printf("%d - %d = %d\n", a, b, ret2);

	return 0;
}