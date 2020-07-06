#include <stdio.h>
#include <string.h>

int main(void)
{
	char S[100];
	int isIn[26];

	memset(isIn, -1, 26 * sizeof(int));
	
	scanf("%s", S);

	for (int i = 0; i < strlen(S); ++i)
	{
		if (isIn[S[i] - 'a'] == -1)
			isIn[S[i] - 'a'] = i;
	}

	for (int i = 0; i < 26; ++i)
	{
		printf("%d ", isIn[i]);
	}

	return 0;
}