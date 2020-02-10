//-------------------------------------------------------
//		오늘 하루 동안 팔린 책의 제목이 입력으로 들어왔을 때, 
//		가장 많이 팔린 책의 제목을 출력하는 프로그램을 작성하시오.
//-------------------------------------------------------
#include <iostream>
#include <string>
#include <map>
#include <iterator>
using namespace std;

int main(void)
{
	int N;
	string str;

	cin >> N;

	map<string, int> books;

	for (int i = 0; i < N; ++i)
	{
		cin >> str;

		if (books.find(str) == books.end())
			books[str] = 1;
		else
			++books[str];
	}

	map<string, int>::iterator iter;
	int cnt = 0;

	for (iter= books.begin(); iter != books.end(); ++iter)
	{
		if (iter->second >= cnt)
		{
			if (iter->second == cnt)
			{
				if (iter->first < str);
				else continue;
			}
			str = iter->first;
			cnt = iter->second;
		}
	}

	cout << str << endl;
}
