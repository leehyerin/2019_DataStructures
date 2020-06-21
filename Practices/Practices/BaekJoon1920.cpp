//다음 줄에는 M개의 수들이 주어지는데, 이 수들이 A안에 존재하는지 알아내면 된다. 1 0
#include <iostream>
#include <algorithm>
using namespace std;

int A[100000];
unsigned int N, M; //(1≤N,M≤100,000)

int BinarySearch(int t)
{
	int left(0), right(N - 1);
	int mid = 0;

	while (left <= right)
	{
		mid = (left + right) / 2;

		if (A[mid] == t)
			return 1;
		else if (A[mid] < t) //오른쪽으로 가기
		{
			left = mid + 1;
		}
		else //왼쪽으로 가기
		{
			right = mid - 1;
		}
	}
	
	return 0;
}

int main(void)
{
	// input
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	for (unsigned int i = 0; i < N; ++i)
		cin >> A[i];
	
	sort(A, A + N);

	//check
	cin >> M;
	int t;
	for (unsigned int i = 0; i < M; ++i)
	{
		cin >> t;
		cout << BinarySearch(t) << "\n";
	}

	return 0;
}