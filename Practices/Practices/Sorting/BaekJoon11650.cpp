//		2���� ��� ���� �� N���� �־�����. ��ǥ�� x��ǥ�� �����ϴ� ������, 
//		x��ǥ�� ������ y��ǥ�� �����ϴ� ������ ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//--------------------------------------------------------------------------
//		ù° �ٿ� ���� ���� N (1 �� N �� 100,000)�� �־�����. 
//		��° �ٺ��� N���� �ٿ��� i������ ��ġ xi�� yi�� �־�����. 
//		(-100,000 �� xi, yi �� 100,000) ��ǥ�� �׻� �����̰�, ��ġ�� ���� �� ���� ����.
//---------------------------------------------------------------------
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(const pair<int, int> &a, const pair<int, int> &b)
{
	if (a.first == b.first)
		return a.second < b.second;
	else
		return a.first < b.first;
}

int main(void)
{
	int N;
	cin >> N;

	vector<pair<int, int>> v(N);

	for (int i = 0; i < N; ++i)
		cin >> v[i].first >> v[i].second;
	
	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < N; ++i)
		cout << v[i].first << " " << v[i].second << endl;	
	
	return 0;
}