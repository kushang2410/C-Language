#include <stdio.h>
#include <conio.h>
#define S1 3
#define S2 4
int main()
{
	int a[S1][S2];
	int i, j;
	for (i = 0; i < S1; i++) // Rows
	{
		for (j = 0; j < S2; j++) // Columns
		{
			printf("Enter the ele a[%d][%d]:", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	printf("\nDisplay\n");
	for (i = 0; i < S1; i++) // Rows
	{
		for (j = 0; j < S2; j++) // Columns
		{
			printf("%5d ", a[i][j]);
		}
		printf("\n");
	}
	getch();
}