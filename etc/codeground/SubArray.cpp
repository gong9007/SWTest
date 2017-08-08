#include <stdio.h>
#include <stdlib.h>

int N;
int src_subarray(int, int);


int main(void)
{
	int T; int S;
	int test_case;
	int *arrSum;
	setbuf(stdout, NULL);

	scanf("%d", &T);
	arrSum = (int*)malloc(sizeof(int)*T);

	for (test_case = 0; test_case < T; test_case++)
	{
		//printf("N, S 입력 \n");
		scanf("%d", &N), scanf("%d", &S);
		//printf("N = %d, S = %d\n", N, S);
		arrSum[test_case] = src_subarray(N, S);
		//printf("%d\n", arrSum[test_case]);
		printf("#testcase%d\n", test_case + 1);
		printf("%d\n", arrSum[test_case]);
	}
	/*
	for (test_case = 0; test_case < T; test_case++)
	{
		
	}*/
	//system("pause");
	return 0;
}

int src_subarray(int N, int S)
{
	int *arr;
	arr = (int*)malloc(sizeof(int)*N);
	int answer = 0;
	
	int qsum_tmp = 0; int qsum = 0;
	
	// 변수 입력부
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	int qstart = 0; int qend = 0;
	int cnt = 1;
	// 배열 탐색 case탐색
	while (cnt <= N)
	{
		cnt++;
		qstart = 0; qend = 0;
		qsum_tmp = 0; qsum = 0; int q_init = 0;
		//printf("cnt = %d 개 씩 확인\n", cnt);
		for (int i = 0; i < N - cnt + 1; i++) // 전체 subarray 탐색
		{
			
			//printf("%d-th array searching\n", i);
			// qsum_tmp값 획득
			if (qstart == 0 && qend == 0)
			{
				// 초기 큐 작성
				qstart = 0; qend = cnt;
				if (q_init == 0)
				{
					for (int j = 0; j < cnt; j++)
					{
						qsum_tmp = qsum_tmp + arr[j];
						//	printf("arr[%d] = %d // qsum_tmp = %d\n", j, arr[j], qsum_tmp);
					}
					q_init = qsum_tmp;
				}
				else
				{
					qsum_tmp = qsum_tmp + arr[cnt - 1];
				}
				//printf("qsum_tmp = %d after initializing...\n", qsum_tmp);
			}
			else
			{
				//printf("before qsum_tmp = %d / bef_arr[%d] = %d / aft_arr[%d] = %d\n", qsum_tmp, qstart, arr[qstart], qend, arr[qend]);
				qsum_tmp = qsum_tmp - arr[qstart] + arr[qend];
				//printf("after qsum_tmp = %d / bef_arr[%d] = %d / aft_arr[%d] = %d\n", qsum_tmp, qstart, arr[qstart], qend, arr[qend]);
				qstart++; qend++;
			}

			if (qsum == 0 || (qsum_tmp >= S && qsum_tmp <= qsum))
			{
				qsum = qsum_tmp;
				//printf("%d 탐색 중 qsum = %d\n", i, qsum);
				
			}
			if (qsum > S)
			{
				//printf("qsum = %d\n", qsum);
				free(arr); //system("pause");
				return cnt;
			}
			else if (i == N - cnt + 1 && qsum_tmp == S)
			{
				//printf("there is nothing to search the subarray %d (qsum_tmp = %d) \n", i, qsum_tmp);
				// 1. 만약 같은 경우에 더이상 검색할 것이 없으면
				free(arr); return 0;

			}
			else
			{
				qsum = 0;
			}
		}
		if (cnt == N)
		{
			
			free(arr); return 0;
		}
		
		
		
		
		
		
	}
	
	
}
