//fibonacci number

//input : 첫째 줄에 n이 주어진다.n은 1,000,000,000,000,000,000보다 작거나 같은 자연수이다.
//output: 첫째 줄에 n번째 피보나치 수를 1,000,000으로 나눈 나머지를 출력한다.

//주기 1,500,000
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

	unsigned int* sequence = new unsigned int[n + 1]; // 1부터 n 번째 배열임
	//Fibonacci(sequence, n);

	printf("%d", Fibonacci(sequence, n));

	return 0;
}