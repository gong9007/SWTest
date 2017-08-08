#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int T;
	scanf("%d", &T);
	char str[10000] = "";


	int len = 0;
	for (int testcase = 0; testcase < T; testcase++)
	{
		int hello[5] = { 0, };
		scanf("%s", str);
		len = strlen(str);

		for (int i = 0; i < len; i++)
		{
			if (str[i] == 'h')
			{
				hello[0]++;
			}
			else if (str[i] == 'e')
			{
				hello[1]++;
			}
			else if (str[i] == 'l')
			{
				hello[2]++;
				
			}
			else if (str[i] == 'o')
			{
				hello[3]++;
			}
		}
		int min = 10000;
		hello[2] = hello[2] / 2;
		
		for (int i = 0; i < 4; i++)
		{
			//printf("hello[%d] = %d\n", i, hello[i]);
			if (min >= hello[i])
			{
				min = hello[i];
			}
		}
		printf("Case #%d\n", testcase + 1);
		printf("%d\n", min);
	}


//	system("pause");
}
