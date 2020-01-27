/*
M�̻� N������ �Ҽ��� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
::�����佺�׳׽��� ü (Sieve of Eratosthenes)
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
		for (int k = mul * mul; k <= n; k += mul) //mul�� ����� ü�� �Ÿ���. 
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