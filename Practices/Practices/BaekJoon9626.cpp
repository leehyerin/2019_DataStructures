#include <iostream>
using namespace std;

int main(void)
{
	char board[20][20];
	int M, N, U, D, L, R;
	char ch[2] = { '#', '.' };

	cin >> M >> N >> U >> L >> R >> D;

	int width = L + N + R;
	int height = U + M + D;
	
	int c, r;
	for (c = 0; c < height; ++c)
		for (r = 0; r < width; ++r)
			board[c][r] = ch[(r + c) % 2];  //�����ư��鼭 �������� # .
	
	//���� ���� �Է�
	for (c = U; c < U + M; ++c)
		for (int r = L; r < L + N; ++r)
			cin >> board[c][r];

	// ���
	for (c = 0; c < height; ++c)
	{
		for (r = 0; r < width; ++r)
			cout << board[c][r];
		cout << "\n";
	}
}
 