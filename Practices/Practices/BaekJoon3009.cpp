//=======================================================================================
// 문제 : 세 점이 주어졌을 때, 축에 평행한 직사각형을 만들기 위해서 필요한 네 번째 점을 찾는 프로그램을 작성하시오.
//=======================================================================================
#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

bool FindX(int, bool);

vector<int> vX, vY;

int main()
{
	int tx, ty;

	for (int i = 0; i < 3; ++i)
	{
		cin >> tx >> ty;

		if ( !FindX(tx, true) )
		{
			vX.push_back(tx);
		}
		if ( !FindX(ty, false) )
		{
			vY.push_back(ty);
		}
	}

	cout << vX[0] << " " << vY[0];

	return 0;
}

bool FindX(int value, bool b)
{
	vector<int> *p ;

	if (b) p = &vX;  else  p = &vY;

	vector<int> ::iterator iter;

	for (iter = p->begin();		iter != p->end();	 ++iter)
	{

		if (*iter == value)
		{
			p->erase(iter);
			return true; 
		}
	}
	return false;
}
