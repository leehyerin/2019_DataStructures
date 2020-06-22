#include <iostream>

#define MIN(a,b)(a < b ? a: b)
#define MAX(a,b)(a > b ? a: b)

using namespace std;

int color[300000];

int main(void) 
{
	unsigned int N, M; //N-���̵��� ��, M-������ ��  (1 �� N �� 10^9, 1 �� M �� 300,000, M �� N)


	int result(1000000000);
	int start(1), end(0);
	cin >> N >> M;

	for (int i = 0; i < M; ++i)
	{
		cin >> color[i];
		end = MAX(end, color[i]);	//���� ������ �ִ밪�� ��������� �����Ѵ�.
	}

	while (start <= end)
	{
		int mid = (start + end) / 2; //���� ��

		int child = 0;

		for (int i = 0; i < M; ++i)
		{
			child += color[i] / mid;

			if (color[i] % mid > 0) 
				child += 1; // �������� �ִٸ� +1
		}			

		//�̺� Ž��
		if (N < child)
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
			result = MIN(mid,result);
		}
	}

	cout << result;

	return 0;
}