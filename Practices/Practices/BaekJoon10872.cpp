//factorial
//0���� ũ�ų� ���� ���� N�� �־�����.�̶�, N!�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
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

