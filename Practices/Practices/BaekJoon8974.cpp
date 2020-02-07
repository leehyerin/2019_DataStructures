// 한 줄에 양의 정수 A와 B가 주어진다. (1 ≤ A ≤ B ≤ 1000)
// 1 + 2+2 + 3+3+3
#include <iostream>
#include <vector>
#define MAX 1000

int main(void)
{
	std::vector<int> vec;
	vec.reserve(MAX);

	int a, b, i = 0, sum = 0;
	std::cin >> a >> b;

	for (int j = 1; j <= 45; ++j)
		for (int k = 0; k < j; ++k)
			if (i < MAX)
			{
				vec.push_back(j);
				++i;
			}

	for (--a; a < b; ++a)
		sum += vec[a];

	std::cout << sum;
	return 0;
}