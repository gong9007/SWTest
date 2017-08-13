#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void)
{
	int T;
	scanf("%d", &T);
	unsigned long long A, B, D;
	//int time = 0;

	for (int testcase = 1; testcase <= T; testcase++)
	{
		scanf("%llu%llu%llu", &A, &B, &D);
		
		unsigned long long time = 0;
		unsigned long long MidMove = 0;
		MidMove = A - B;
		unsigned long long MovDist = A;
		unsigned long long MovCnt = 0;

		

		time = 1 + (D - MovDist) / MidMove;
		if ((D - MovDist) % MidMove != 0)
		{
			time++;
		}
		printf("Case #%d\n%llu\n", testcase, time);

	}
//	system("pause");

}
