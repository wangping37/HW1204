#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 13

int main()
{
	int x, y, i, j;
	int sum[SIZE] = { 0 };
	srand(time(NULL));
	for (i = 1; i <= 36000; i++)
	{
		x = 1 + rand() % 6;
		y = 1 + rand() % 6;
		sum[x + y]++;
	}
	for (i = 1; i <= 11; i++)
	{
		printf("骰出%d的次數:%-5d\n", i + 1, sum[i + 1]);
	}
	system("pause");
	return 0;

}