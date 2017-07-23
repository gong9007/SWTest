#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define N 5
int arr[N] = { 0, };

void sort_selection(int cmd)
{
	int tmp; int min_idx; int max_idx;
	if (cmd == 1)
	{
		for (int i = 0; i < N - 1; i++)
		{
			
			int min_idx = i;
			
			for (int j = i + 1; j < N; j++)
			{
				if (arr[j] <= arr[min_idx])
				{
					min_idx = j;
				}
			}
			tmp = arr[min_idx];
			arr[min_idx] = arr[i];
			arr[i] = tmp;
			for (int i = 0; i < N; i++)
			{
				printf("%d ", arr[i]);
			}
			printf("\n");
		}
	}
	else if (cmd == 2)
	{
		for (int i = 0; i < N - 1; i++)
		{

			int max_idx = i;
			
			for (int j = i + 1; j < N; j++)
			{
				if (arr[j] >= arr[max_idx])
				{
					max_idx = j;
				}
			}
			tmp = arr[max_idx];
			arr[max_idx] = arr[i];
			arr[i] = tmp;
			for (int i = 0; i < N; i++)
			{
				printf("%d ", arr[i]);
			}
			printf("\n");
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
	sort_selection(cmd);
	system("pause");
	return 0;
}