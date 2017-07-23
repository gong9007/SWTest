#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#define N 5

int arr[N];

void sort_bubble(int cmd)
{
	int tmp = 0;
	if (cmd == 1)
	{

		for (int i = N - 1; i >= 0; i--)
		{
			for (int j = 0; j < i; j++)
			{
				if (arr[j] >= arr[j + 1])
				{
					tmp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = tmp;
				}
			}
		}
	}
	else if (cmd == 2)
	{

		for (int i = N - 1; i >= 0; i--)
		{
			for (int j = 0; j < i; j++)
			{
				if (arr[j] <= arr[j + 1])
				{
					tmp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = tmp;
				}
			}
		}
	}
	for (int i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
	}
}


int main(void)
{
	int cmd = 0;
	printf("초기 입력 배열\n");
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("오름차순일 때 1, 내림차순일 때 2 입력\n");
	scanf("%d", &cmd);
	sort_bubble(cmd);
	system("pause");
	return 0;
}