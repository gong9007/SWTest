#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int calc_point(int, int);
int main(void)
{
	int T; int N; int K; int ans;
	setbuf(stdout, NULL);

	scanf("%d", &T);
	
	for (int testcase = 0; testcase < T; testcase++)
	{
		scanf("%d", &N); scanf("%d", &K);
	//	printf("N = %d / K = %d\n", N, K);
		ans = calc_point(N, K);
		printf("Case #%d\n", testcase + 1);
		printf("%d\n", ans);

	}
	//system("pause");
	return 0;
}

int calc_point(int N, int K)
{
	int point;
	//point = (int*)malloc(sizeof(int)*N);

	int point_rank[101] = { 0, };


	for (int i = 0; i < N; i++)
	{
		scanf("%d", &point);
		point_rank[point] = point_rank[point] + 1;
		//printf("%d 's point rank = %d\n", point[i], point_rank[point[i]]);
	}
	int total_p = 0; int cnt = 0;
	while (1)
	{
		
		for (int i = 100; i >= 0; i--)
		{
			//printf("cnt = %d\n", cnt);
			//printf("i = %d\n", i);
			//printf("point_rank[%d] = %d\n", i, point_rank[i]);
			if (point_rank[i] != 0)
			{
				//printf("before pt_rank[%d] = %d\n", i, point_rank[i]);
				total_p = total_p + i;
				point_rank[i]--;
				cnt++; i++;
				//printf("after pt_rank[%d] = %d\n", i, point_rank[i]);
			}
			if (cnt == K)
			{
				return total_p;
			}

		}

		if (cnt == K)
		{
			break;
		}
	}

	// sorting
	/*int tmp = 0; int cnt = 0; int total_p = 0;/*
	for (int i = 0; i < N; i++)
	{
		
		/*
		for (int j = i + 1; j < N; j++)
		{
			if (point[i] <= point[j])
			{
				tmp = point[i];
				point[i] = point[j];
				point[j] = tmp;
				
			}
		}
		tmp = 0;
		


		total_p = total_p + point[i]; cnt++;
		//printf("total_point = %d\n", total_p);
		if (cnt == K)
		{
			//printf("K = %d\n", K);  
			break;
		}

}*/
	//printf("total maximum point = %d\n", total_p);
	//system("pause");
	//free(point);
	return total_p;
}
