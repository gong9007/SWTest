#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
int map[50][50] = { 0, };
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, -1, 0, 1 };

void searchPlant(int x, int y)
{
	map[y][x] = 0;
	//printf("(%d, %d) 탐색\n", x, y);
	for (int i = 0; i < 4; i++)
	{
		if (map[y + dy[i]][x + dx[i]] == 1)
		{
			searchPlant(x + dx[i], y + dy[i]);
		}
	}
}

int main(void)
{
	int T;
	int M, N;
	int K;
	int X, Y;
	scanf("%d", &T);
	
	int *cnt = (int*)malloc(sizeof(int)*T);
	int idx = 0;
	for (int testcase = 0; testcase < T; testcase++)
	{
		// Testcase별 input 
		cnt[idx] = 0;
		scanf("%d", &M); scanf("%d", &N); scanf("%d", &K);
		for (int p = 0; p < K; p++)
		{
			scanf("%d", &X); scanf("%d", &Y);
			map[Y][X] = 1;
		}

		// search
		for (int ypos = 0; ypos < N; ypos++)
		{
			for (int xpos = 0; xpos < M; xpos++)
			{
				if (map[ypos][xpos] == 1)
				{
					searchPlant(xpos, ypos);
				
					cnt[idx] += 1;
				}
			}
		}
		idx++;

	}
	for (int testcase = 0; testcase < T; testcase++)
	{ 
		printf("%d\n", cnt[testcase]);
	}
	system("pause");
}
