// ù° �ٿ� N, �������� ���ο� ����, �׸��� P�� �־�����. 
// 10<=P<= 50 ����  0<=N<=P ���� �׸��� ��� ������ 2,000,000,000���� �۰ų� ���� �ڿ��� �Ǵ� 0�̴�. 
// ��° �ٿ��� ���� ��ŷ ����Ʈ�� �ִ� ������ ������������� �־�����. ��° ���� N�� 0���� ū ��쿡�� �־�����.
//-------------------------------------------------------------------------------------------------

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int Rank( const vector<unsigned int>* , int, int , unsigned int );

int main(void)
{
	int N, P;
	unsigned int new_score;

	cin >> N >> new_score >> P;

	vector<unsigned int> score(N);

	for (int i = 0; i < N; ++i)
		cin >> score[i];

	sort(score.begin(), score.end(), greater<unsigned int>());
	
	cout << Rank(&score, N, P, new_score);
}

int Rank(const vector<unsigned int>* v, int totallist, int maxlist, unsigned int newscore)
{
	unsigned int curr_score = (*v)[0];
	int curr_rank = 0, new_rank = 0;
	bool isExeed = false;
	int M = maxlist;	if (totallist < maxlist) { isExeed = true; M = totallist; }
	
	for (int i = 0; i < M; ++i)
	{
		unsigned int val = (*v)[i];

		if (val <= curr_score)
		{
			if (newscore == curr_score) break;
			else
			{
				curr_score = val;
				curr_rank = i + 1;
			}
		}
		if (val < newscore)
		{
			new_rank = curr_rank;
			break;
		}
		else if (val == newscore)
		{
			if (i + 1 == M)
			{
				new_rank = -1;
				break;
			}
			else
				new_rank = curr_rank;
		}
	}

	if (isExeed && new_rank == 0) return totallist + 1;
	else if (new_rank == 0) return -1;
	else	return new_rank;
}