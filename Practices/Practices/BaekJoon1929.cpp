/*
M�̻� N������ �Ҽ��� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
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
		if (num % i == 0) // �Ҽ��� �ƴ϶��
		{
			return 0;
		}
	}
	return num; //�Ҽ����
}