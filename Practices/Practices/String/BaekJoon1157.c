#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[1000000];
	int alpha[26] = { 0, }; //65~90
	int len = 0, max = -1;
	char val;

	scanf("%s", s);
	len = strlen(s);

	for (int i = 0; i < len; ++i)
	{
		if (97 <= s[i]) s[i] -= 32; // 대문자로 모두 바꿔주기

		alpha[s[i] - 65] += 1;
	}

	for (int i = 0; i < 26; ++i)
	{
		if (max == alpha[i]) val = '?';
		else if (max < alpha[i])
		{
			max = alpha[i];
			val = i + 65;
		}
	}

	printf("%c", val);

	return 0;
}
