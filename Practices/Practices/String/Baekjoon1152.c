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
	//���� �� �� ������ ��= ����
		if (c[i] == ' ')
			if (space == 1) return;	//���� �� �� = ����
			else space = 1;
	//�ܾ� ������ ��(���Ⱑ true���) ���⸦ false�� �����,count ++
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