//-------------------------------------------------------
//		���� �Ϸ� ���� �ȸ� å�� ������ �Է����� ������ ��, 
//		���� ���� �ȸ� å�� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
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
