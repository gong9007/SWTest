#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define N 5
int arr[N] = { 0, };

void sort_insertion(int cmd)
{
	int tmp; int j;
	int pivot;
	
	if (cmd == 1)
	{
		for (int i = 1; i < N; i++)
		{
			pivot = arr[i];
			j = i;
			while (arr[j - 1] >= pivot && j >= 0)
			{
				arr[j] = arr[j - 1];
				j--;
			}
			arr[j] = pivot;
		}

	}
	else if (cmd == 2)
	{
		for (int i = 1; i < N; i++)
		{
			pivot = arr[i];
			j = i;
			while (arr[j - 1] <= pivot && j >= 0)
			{
				arr[j] = arr[j - 1];
				j--;
			}
			arr[j] = pivot;
		}
	}
	printf("정렬 후 array\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main(void)
{
	int cmd;
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("오름차순은 1, 내림차순은 2 입력\n");
	scanf("%d", &cmd);
	sort_insertion(cmd);
	system("pause");
	return 0;
}