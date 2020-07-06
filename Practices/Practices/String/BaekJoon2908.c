#include <stdio.h>
#include <math.h>
#define SWAP(a,b) (int t=a; a=b; b=t;)
#define BIG(a,b)  (a < b? b:a)

int InputReverse()
{
	int val = 0, t = 0;
	for (int i = 0; i < 3; ++i)
	{
		scanf("%1d", &t);
		val += (int)(t * pow(10, i));
	}
	return val;
}

int main(void)
{
	int Ra, Rb;
	
	Ra = InputReverse();
	Rb = InputReverse();

	printf("%d", BIG(Ra, Rb));

	return 0;
}