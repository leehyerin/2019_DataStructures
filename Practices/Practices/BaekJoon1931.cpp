//Greedy Algorithm

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


struct Meeting
{
	int start, end;
};

void printf(const vector<Meeting>&);

int cmp(const Meeting& a, const Meeting& b)
{
	if (a.end == b.end)
		return a.start < b.start;  // 작은 순서대로
	
	return a.end < b.end;
}

int main(void)
{
	int N, end(0), count(0);

	//input
	cin >> N;
	vector<Meeting> meetings(N);

	for (int i = 0; i < N; ++i)
		cin >> meetings[i].start >> meetings[i].end;
	
	//sort
	sort(meetings.begin(), meetings.end(),cmp);
	
	//check
	for (auto d : meetings)
	{
		if (end <= d.start)
		{
			end = d.end;
			++count;
		}
	}

	//printf(meetings);

	cout << count;
}

void printf(const vector<Meeting>& v)
{
	cout << "------Print-------\n";
	for (auto d : v)
		cout << d.start << ' ' << d.end << "\n";

}