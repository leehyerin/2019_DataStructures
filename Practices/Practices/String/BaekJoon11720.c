#include <stdio.h>

int main(void)
{
	int N;
	char input[100];
	int ret = 0;

	scanf("%d", &N);
	scanf("%s", input);

	for (int i = 0; i < N; ++i)
		ret += input[i] - '0';
	
	printf("%d", ret);

	return 0;
}