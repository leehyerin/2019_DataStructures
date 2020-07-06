#include <stdio.h>

int main(void)
{
	int tc = 0; //test case
	char S[1000][20];
	char ret[1000][160]; //8*20

	scanf("%d", &tc);

	for (int i = 0; i < tc; ++i)
	{
		int n;
		scanf("%d", &n);
		scanf("%s", S[i]);
	}

	return 0;
}