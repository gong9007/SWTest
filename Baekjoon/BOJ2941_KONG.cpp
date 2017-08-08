#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char croatian[101] = "";
	char ch[8][4] = {
		"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" 
	};
	int arr[26 + 8] = { 0, };// a = 97 z = 122
	int qpivot = 0;
	// define Croatian alphabet.
	scanf("%s", croatian);
	
	while (1)
	{
		if (qpivot == strlen(croatian)) break;
		// 걸러야 될 알파벳 탐색
		if (croatian[qpivot] == 'c')
		{
			if (qpivot + 1 <= 100 && croatian[qpivot + 1] == '=')
			{
				arr[26] = 1;
			//	printf("c=\n");
				qpivot+=2;
			}
			else if (qpivot + 1 <= 100 && croatian[qpivot + 1] == '-')
			{
				arr[27] = 1;
			//	printf("c-\n");
				qpivot+=2;
			}
			else
			{
			//	printf("%c\n", croatian[qpivot]); 
				arr[croatian[qpivot++] - 97] = 1;
			}
		}
		else if (croatian[qpivot] == 'd')
		{
			//"dz=", "d-"
			if (qpivot + 2 <= 100 && croatian[qpivot + 1] == 'z' && croatian[qpivot + 2] == '=')
			{
				arr[28] = 1;
			//	printf("dz=\n");
				qpivot += 3;
			}
			else if (qpivot + 1 <= 100 && croatian[qpivot + 1] == '-')
			{
				arr[29] = 1;
			//	printf("d-\n");
				qpivot+=2;
			}
			else
			{
			//	printf("%c\n", croatian[qpivot]);
				arr[croatian[qpivot++] - 97] = 1;
			}
		}
		else if (croatian[qpivot] == 'l' || croatian[qpivot] == 'n')
		{
			//"lj", 
			if (qpivot + 1 <= 100 && croatian[qpivot + 1] == 'j' && croatian[qpivot] == 'l')
			{
				arr[30] = 1;
			//	printf("lj\n");
				qpivot+=2;
			}
			else if (qpivot + 1 <= 100 && croatian[qpivot + 1] == 'j' && croatian[qpivot] == 'n')
			{
				arr[31] = 1;
			//	printf("nj\n");
				qpivot+=2;
			}
			else
			{
			//	printf("%c\n", croatian[qpivot]);
				arr[croatian[qpivot++] - 97] = 1;
			}
		}
		else if (croatian[qpivot] == 's' || croatian[qpivot] == 'z')
		{
			if (qpivot + 1 <= 100 && croatian[qpivot] == 's' && croatian[qpivot + 1] == '=')
			{
				arr[32] = 1;
			//	printf("s=\n");
				qpivot+=2;
			}
			else if (qpivot + 1 <= 100 && croatian[qpivot] == 'z' && croatian[qpivot + 1] == '=')
			{
				arr[33] = 1;
			//	printf("z=\n");
				qpivot+=2;
			}
			else
			{
			//	printf("%c\n", croatian[qpivot]);
				arr[croatian[qpivot++] - 97] = 1;
			}
		}
		else
		{
		//	printf("%c\n", croatian[qpivot]);
			arr[croatian[qpivot++] - 97] = 1;
			
		}
	}
	int cnt = 0;
	for (int i = 0; i < 34; i++)
	{
		if (arr[i] == 1)
		{
			cnt++;
		}
	}
	printf("%d\n", cnt);
//	system("pause");
}
