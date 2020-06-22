#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
vector <int> A;

int BinarySearch(int t)
{
	int left(0), right(N - 1), mid;

	while (left <= right)
	{ 
		mid = (left + right) / 2;

		if (A[mid] == t)		return 1;
		else if (A[mid] < t) left = mid + 1;
		else right = mid - 1;
	}

	return 0;
}

int main(void)
{
	//input
	ios_base::sync_with_stdio(0);
	cin.tie(0); 
	cin >> N;  //  N(1 ¡Â N ¡Â 500,000)
	A.resize(N);
	for (int i = 0; i < N; ++i)
		cin >> A[i]; // -10000000 ~ 10000000

	sort(A.begin(), A.end());

	cin >> M;  //  M(1 ¡Â M ¡Â 500,000)
			
	//check
	int t;
	for (int i = 0; i < M; ++i)
	{
		cin >> t;   
		cout << BinarySearch(t)<<" ";
	}
	
	return 0;
}