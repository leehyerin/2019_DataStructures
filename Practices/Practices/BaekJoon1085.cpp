/*
한수는 지금 (x, y)에 있다. 
직사각형은 각 변이 좌표축에 평행하고, 왼쪽 아래 꼭짓점은 (0, 0), 오른쪽 위 꼭짓점은 (w, h)에 있다. 
직사각형의 경계선까지 가는 거리의 최솟값을 구하는 프로그램을 작성하시오.
*/

#define MIN(a,b)(a < b ? a: b)

#include <iostream>


int main()
{
	int x, y, w, h, min;
	std::cin >> x >> y >> w >> h;

	min = MIN(abs(x - w), abs(y - h));
	min = MIN(min, x);
	min = MIN(min, y);

	std::cout << min;
}