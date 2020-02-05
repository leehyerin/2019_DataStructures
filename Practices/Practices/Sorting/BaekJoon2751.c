// quick sort
// N(1 ≤ N ≤ 1,000,000)의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.

# include <stdio.h>
# include <malloc.h>
# define SWAP(x,y) {int t=x; x=y; y=t;}

int Partition(int* list, int left, int right)
{
	int low = left + 1;
	int high = right;

	int pivot = list[left];

	while (low < high)
	{
		for (; list[low] < pivot	&& low<=right; ++low);
		for (; list[high] > pivot	&& left<=high ; --high);
		if (low < high) 
			SWAP(list[low], list[high]);
	}
	SWAP(list[left], list[high]);
	return high; //partition based high
}

void QuickSort(int* list, int left, int right)
{
	int pivot;
	if (left < right)
	{
		pivot = Partition(list, left, right);

		QuickSort(list, left, pivot - 1);	//left side
		QuickSort(list, pivot + 1, right);	//right side
	}
}

int main(void)
{
	int N = 0;
	scanf("%d", &N);

	int* arr = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; ++i)
		arr[i]=500000 - i;
		//scanf("%d", &arr[i]);

	QuickSort(arr, 0, N - 1);

	for (int i = 0; i < N; ++i)
		printf("%d\n", arr[i]);

	free(arr);
	return 0;
}