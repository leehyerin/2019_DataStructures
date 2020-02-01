//fibonacci number

//input : ù° �ٿ� n�� �־�����.n�� 1,000,000,000,000,000,000���� �۰ų� ���� �ڿ����̴�.
//output: ù° �ٿ� n��° �Ǻ���ġ ���� 1,000,000���� ���� �������� ����Ѵ�.

//�ֱ� 1,500,000
#include <stdio.h>
#include <cstring>
#pragma warning(disable : 4996)

#define CYCLE 1500000
#define MOD  1000000

int Fibonacci(unsigned int* p, int num)
{
	p[0] = 0;
	p[1] = 1;

	for (int i = 2; i <= num; ++i)
	{
		p[i] = p[i - 2] + p[i - 1];
		p[i] %= MOD;
 	}
	return p[num];
}

int main(void)
{
	int n;
	scanf("%d", &n);
	n %= CYCLE;

	unsigned int* sequence = new unsigned int[n + 1]; // 1���� n ��° �迭��
	//Fibonacci(sequence, n);

	printf("%d", Fibonacci(sequence, n));

	return 0;
}