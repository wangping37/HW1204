#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char a[100];
void stringReverse(int x);

int main()
{
	printf("½Ð¿é¤J¤å¦r:");
	scanf_s("%s", &a,99);
	int x = strlen(a);
	stringReverse(x);
	system("pause");
	return 0;
}
//////////////////////////////////////////////////////
void stringReverse(int x)
{
	if (x == 1)
	{
		printf("%c", a[0]);

	}
	else
	{
		printf("%c", a[x - 1]);
		stringReverse(x - 1);
	}
}