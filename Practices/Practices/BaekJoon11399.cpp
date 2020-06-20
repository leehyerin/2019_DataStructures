//Greedy Algorithm

#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int N;
	int P[1000];
	cin >> N;

	for (int i = 0; i < N; ++i)
		cin >> P[i];

	sort(P, P + 10);

	int time = 0, ret = 0;
	for (int i = 0; i < N; ++i)
	{
		time += P[i];
		ret += time;
	}

	cout << ret;

	return 0;
}