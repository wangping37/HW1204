#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int a[SIZE] = { 0 };
int recursiveMaximum(int x);
int max = 0;

int main()
{
	int i, b;

	printf("你輸入要幾個(最多10個):");
	scanf_s("%d", &b);
	while (b > 10)
	{
		printf("請重新輸入:");
		scanf_s("%d", &b);
	}
	for (i = 0; i <= b - 1; i++)
	{
		scanf_s("%d", &a[i]);
	}

	for (i = 0; i <= b - 1; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	recursiveMaximum(b - 1);
	printf("最大值:%d\n", max);
	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////
int recursiveMaximum(int x)
{
	if (x == 0)
	{
		if (a[x] > max)
		{
			max = a[x];
		}

	}
	else
	{
		if (a[x]>max)
		{
			max = a[x];
		}
		recursiveMaximum(x - 1);
	}
}