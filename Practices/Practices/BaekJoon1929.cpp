/*
M이상 N이하의 소수를 모두 출력하는 프로그램을 작성하시오.
::에라토스테네스의 체 (Sieve of Eratosthenes)
*/
#include <iostream>
#include <cstring>

int main(void)
{
	int m, n;

	scanf("%d %d", &m, &n);

	bool* prime = new bool[n + 1];
	memset(prime, false, sizeof(prime));

	if (m == 1)
	{
		prime[1] = true;
	}

	for (int mul = 2; mul*mul <= n; ++mul) 
	{
		for (int k = mul * mul; k <= n; k += mul) //mul의 배수를 체로 거른다. 
		{
			if (prime[k] == false)
			{
				prime[k] = true;
			}
		}
	}
	
	for (int k = m; k <= n; ++k)
	{
		if (!prime[k])
		{
			std::cout << k << "\n";
		}
	}

	return 0;
}