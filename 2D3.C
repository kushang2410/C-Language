#include<stdio.h>
#include<conio.h>
#define S1 2
#define S2 2
void main()
{
	int a[S1][S2],b[S1][S2],c[S1][S2];
	int i,j;
	clrscr();

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
	printf("\nSubtraction\n");
	for(i=0;i<S1;i++)  // Rows
	{
		for(j=0;j<S2;j++) // Columns
		{
			c[i][j]=a[i][j]-b[i][j];
			printf("%5d ",c[i][j]);
		}
		printf("\n");
	}
	getch();
}