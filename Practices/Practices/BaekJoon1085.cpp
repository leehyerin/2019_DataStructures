/*
�Ѽ��� ���� (x, y)�� �ִ�. 
���簢���� �� ���� ��ǥ�࿡ �����ϰ�, ���� �Ʒ� �������� (0, 0), ������ �� �������� (w, h)�� �ִ�. 
���簢���� ��輱���� ���� �Ÿ��� �ּڰ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
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