#include<stdio.h>
#include<conio.h>
#define S1 2
#define S2 2
int main()
{
	int a[S1][S2],b[S1][S2];
	int i,j;
	for(i=0;i<S1;i++)  // Rows
	{
		for(j=0;j<S2;j++) // Columns
		{
			printf("Enter the ele a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<S1;i++)  // Rows
	{
		for(j=0;j<S2;j++) // Columns
		{
			printf("Enter the ele b[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nAddition\n");
	for(i=0;i<S1;i++)  // Rows
	{
		for(j=0;j<S2;j++) // Columns
		{
			printf("%5d ",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
	getch();
}