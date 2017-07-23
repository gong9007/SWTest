#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int N = 3;
	
	char arr[] = "abcdefgh";
	char tmp[sizeof(arr)] = "";  // sizeof!

	for (int n = 0; n < N; n++)
	{
		int pivot2 = strlen(arr) / 2;
		int pivot1 = 0;

		for (int i = 0; i < strlen(arr); i++)
		{
			if (i % 2 == 0)
			{
				tmp[i] = arr[pivot1++];
			}
			else if (i % 2 == 1)
			{
				tmp[i] = arr[pivot2++];
			}

		}
		for (int i = 0; i<strlen(arr); i++)
		{
			arr[i] = tmp[i];
			printf("%c ", arr[i]);
		}
		printf("\n\n");
	}
	system("pause");
}