#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
	char c[100] = "";
	scanf("%s", c);
	printf("%s\n", c);
	int len = strlen(c) - 1;
	printf("%d\n", len - 1);
	int state = 0;
	for (int i = 0; i <= len / 2; i++)
	{
		
		if (c[i] != c[len - i])
		{
			state = 1;
			printf("0\n");
			break;
		}
	}
	if (state == 0)
		printf("1\n");

	
	return 0;
}
