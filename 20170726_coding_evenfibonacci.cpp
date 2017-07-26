#include <stdio.h>
#include <stdlib.h>


int fibonacci(int i)
{
	if (i > 2)
		return fibonacci(i - 1) + fibonacci(i - 2);
	else
		return 1;
}


int main(void)
{
	int num = 1;
	int sum = 0;
	int fib = 0;
	while (1)
	{
		fib = fibonacci(num);

		if (fib % 2 == 0)
		{ 
			printf("%d\n", fib); sum += fib;
		}
			

		if (fib > 4000000) break;
		num++;
	}
	printf("%d\n", sum);
	system("pause");
}
