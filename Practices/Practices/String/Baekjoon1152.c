#include <stdio.h>
#include <string.h>

int main(void)
{
	char c[1000000];
	fgets(c, 1000000, stdin);
	int len = strlen(c) - 1;

	int space = -1;
	int count = 0;

	for (int i = 0; i < len; ++i)
	{
	//띄어쓰기 한 번 만났을 때= 저장
		if (c[i] == ' ')
			if (space == 1) return;	//띄어쓰기 두 개 = 종료
			else space = 1;
	//단어 만났을 때(띄어쓰기가 true라면) 띄어쓰기를 false로 만들고,count ++
		else
			if (space != 0)
			{
				space = 0;
				++count;
			}
	}

	printf("%d", count);

	return 0;
}