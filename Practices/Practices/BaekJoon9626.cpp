#include <iostream>
<<<<<<< HEAD
=======
#include <string>
>>>>>>> 428b2e1... matrix
using namespace std;

int main(void)
{
	char board[20][20];
	int M, N, U, D, L, R;
	char ch[2] = { '#', '.' };

	cin >> M >> N >> U >> L >> R >> D;

<<<<<<< HEAD
	int width = L + N + R;
	int height = U + M + D;
	
	int c, r;
	for (c = 0; c < height; ++c)
		for (r = 0; r < width; ++r)
			board[c][r] = ch[(r + c) % 2];  //번갈아가면서 찍히도록 # .
	
	//퍼즐 문자 입력
	for (c = U; c < U + M; ++c)
		for (int r = L; r < L + N; ++r)
			cin >> board[c][r];

	// 출력
	for (c = 0; c < height; ++c)
	{
		for (r = 0; r < width; ++r)
			cout << board[c][r];
=======
	int width = N + L + R;
	int height = U + M + D;
	
	int c, r;
	for (c = 0; c < width; ++c)
	{
		for (r = 0; r < height; ++r)
		{
			board[c][r] = ch[(r + c) % 2];
		}
	}
	//퍼즐 입력
	for (c = U; c < U + M; ++c)
	{
		string s;		cin >> s;

		for (int i = 0; i < N; ++i)
			board[c][L+i] = s[i];
	}
	// 출력
	for (int c = 0; c < width; ++c)
	{
		for (int r = 0; r < height; ++r)
		{
			cout << board[c][r] << " ";
		}
>>>>>>> 428b2e1... matrix
		cout << "\n";
	}
}
 