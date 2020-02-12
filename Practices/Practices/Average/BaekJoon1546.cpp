#include <stdio.h>

int main(void)
{
	float* score;
	int num;
	float max = 0.f, sum = 0.f;

	scanf("%d", &num);

	score = new float[num];

	for (int i = 0; i < num; ++i)
	{
		scanf("%f", &score[i]);
		
		if (score[i] > max)
			max = score[i];
	}

	for (int i = 0; i < num; ++i)
		score[i] = (score[i] / max) * 100;
	
	for (int i = 0; i < num; ++i)
		sum += score[i];
	
	printf("%.3f", sum / num);

	return 0;
}