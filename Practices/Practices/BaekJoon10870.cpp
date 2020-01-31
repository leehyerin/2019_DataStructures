/*
fibonacci number
recursive function

�Ǻ���ġ ���� 0�� 1�� �����Ѵ�. 0��° �Ǻ���ġ ���� 0�̰�, 1��° �Ǻ���ġ ���� 1�̴�. �� ���� 2��° ���ʹ� �ٷ� �� �� �Ǻ���ġ ���� ���� �ȴ�.
�̸� ������ �Ẹ�� Fn = Fn-1 + Fn-2 (n>=2)�� �ȴ�.
n=17�϶� ���� �Ǻ���ġ ���� �Ẹ�� ������ ����.
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597
n�� �־����� ��, n��° �Ǻ���ġ ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

ù° �ٿ� n�� �־�����. n�� 20���� �۰ų� ���� �ڿ��� �Ǵ� 0�̴�.
*/

#include <stdio.h>

int Fibonacci(int num)
{
	if (num == 0) return 0;
	else if (num == 1) return 1;
	else
		return Fibonacci(num - 1) + Fibonacci(num - 2);
}

int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%d", Fibonacci(n));

	return 0;
}