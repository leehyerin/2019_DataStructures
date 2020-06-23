#include <iostream>

#define MAX(a,b) (a>b? a: b)
#define MIN(a,b) (a<b? a: b)

using namespace std;

long long T[100000];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); 
	
	long long N, M; //N �ɻ�� ��, M ��� ��  (1 �� N �� 100,000, 1 �� M �� 1,000,000,000)
	cin >> N >> M;

	long long  start(100000), end(0);

	for (int i = 0; i < N; ++i)
	{
		cin >> T[i]; //(1 �� Tk �� 10^9)
		end = MAX(end, T[i]);
	}

	start = 1;
	end = M * end;
	
	//�̺�Ž������ result �ּҰ� ã��
	long long result(end); 

	while (start <= end)
	{
		long long mid = (start + end) / 2;  //��밪

		long long person = 0;
		for (int i = 0; i < N; ++i)
			person += (mid / T[i]);

		//
		if (person < M)  // M ����� �� ��ȭ���� ���� ��, �ð��� �÷���
			start = mid + 1;

		else
		{		
			end = mid - 1;
			result = MIN(result, mid);
		}
	}

	cout << result; //�ּҽð�

	return 0;
}