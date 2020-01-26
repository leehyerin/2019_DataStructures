#include <iostream>
#include <math.h>
using namespace std;

bool CheckPrime(int);

int main(void)
{
	int count{ 0 }, prime{ 0 }, t{ 0 };

	cin >> count;

	while (count > 0)
	{
		cin >> t;
		if (CheckPrime(t)) ++prime;

		--count;
	}
	
	cout << prime;


	return 0;
}

bool CheckPrime(int num)
{
	if (num == 1) return false;

	for (int i = 2; i <= sqrt(num); ++i)
	{
		if (num % i == 0) // 소수라면
		{
			return false;
		}
	}
	return true;
}