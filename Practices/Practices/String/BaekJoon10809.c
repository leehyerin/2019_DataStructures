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
		for (char c = 'a'; c <= 'z'; ++c)
		{
			if (c == S[i] && (-1 == isIn[c - 97]))
				isIn[c - 97] = i;
		}
	}

	for (int i = 0; i < 26; ++i)
	{
		printf("%d ", isIn[i]);
	}

	return 0;
}