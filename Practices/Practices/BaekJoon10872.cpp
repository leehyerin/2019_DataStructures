//factorial
//0보다 크거나 같은 정수 N이 주어진다.이때, N!을 출력하는 프로그램을 작성하시오.
//N (0<=N<=12)
#include <stdio.h>

int Factorial(int num)
{
	if (num == 1 || num == 0)	return 1;

	return num * Factorial(num - 1);
}

int main(void)
{
	int num = 0;

	scanf_s("%d", &num);
	
	printf("%d", Factorial(num));

	return 0;
}

