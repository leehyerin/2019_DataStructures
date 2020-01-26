/*
M이상 N이하의 소수를 모두 출력하는 프로그램을 작성하시오.
*/

#include <iostream>
#include <math.h>

int CheckPrime(int);

int main(void)
{
	int m, n, t{ 0 };

	std::cin >> m >> n;

	for (int i = m; i <= n; ++i)
	{
		t = CheckPrime(i);

		if (t != 0) std::cout << t << std::endl;
	}

	return 0;
}

int CheckPrime(int num)
{
	if (num == 1) return 0;

	for (int i = 2; i <= sqrt(num); ++i)
	{
		if (num % i == 0) // 소수가 아니라면
		{
			return 0;
		}
	}
	return num; //소수라면
}