#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define N 5
int arr[N] = { 0, };

void sort_shell(int cmd)
{
	int tmp, j;
	int k = N;

	if (cmd == 1)
	{
		do
		{
			k = k / 3 + 1;
			for (int m = 0; m < k; m++)
			{ 
				for (int i = m + k; i < N; i += k)
				{
				
					tmp = arr[i];
					for (j = i - k; arr[j] > tmp && j >= 0; j -= k)
					{
						arr[j + k] = arr[j];
					}
					arr[j + k] = tmp;
				
				}
			}
		
		} while (k != 1); 
		

	}
	else if (cmd == 2)
	{
		do
		{
			k = k / 3 + 1;
			for (int m = 0; m < k; m++)
			{
				for (int i = m + k; i < N; i += k)
				{

					tmp = arr[i];
					for (j = i - k; arr[j] < tmp && j >= 0; j -= k)
					{
						arr[j + k] = arr[j];
					}
					arr[j + k] = tmp;

				}
			}

		} while (k != 1);


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
	sort_shell(cmd);
	system("pause");
	return 0;
}