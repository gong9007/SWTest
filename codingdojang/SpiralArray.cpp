#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int arr[6][6] = { 0, };
int xMinPivot = 0;
int xMaxPivot = 5;
int yMinPivot = 0;
int yMaxPivot = 5;

int tState = 0;

int cnt = 0;
void main()
{

	while (1)
	{
		if (tState == 0)
		{
			tState = 1;
			for (int i = xMinPivot; i <= xMaxPivot; i++)
			{
				arr[yMinPivot][i] = cnt++;
				if (cnt == 36)
				{
					tState = 5;
					break;
				}
			}

			yMinPivot++;
		}
		else if (tState == 1)
		{
			tState = 2;
			for (int i = yMinPivot; i <= yMaxPivot; i++)
			{
				arr[i][xMaxPivot] = cnt++;
				if (cnt == 36)
				{
					tState = 5;
					break;
				}

			}

			xMaxPivot--;
		}
		else if (tState == 2)
		{
			tState = 3;
			for (int i = xMaxPivot; i >= xMinPivot; i--)
			{
				arr[yMaxPivot][i] = cnt++;
				if (cnt == 36)
				{
					tState = 5;
					break;
				}
			}

			yMaxPivot--;
		}
		else if (tState == 3)
		{
			tState = 0;
			for (int i = yMaxPivot; i >= yMinPivot; i--)
			{
				arr[i][xMinPivot] = cnt++;
				if (cnt == 36)
				{
					tState = 5;
					break;
				}
			}

			xMinPivot++;
		}
		if (tState == 5)
			break;
	}

	for (int i = 0; i<6; i++)
	{
		for (int j = 0; j<6; j++)
		{
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
	system("pause");

}
