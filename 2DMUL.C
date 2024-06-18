#include<stdio.h>
#include<conio.h>
#define S 3
void main()
{
	int a[S][S],b[S][S],i,j,k,sum;
	clrscr();

	for(i=0;i<S;i++)
	{
		for(j=0;j<S;j++)
		{
			printf("Enter the element at a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<S;i++)
	{
		for(j=0;j<S;j++)
		{
			printf("Enter the element at b[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
		}
	}

	printf("\n2D matrix multiplication\n");

	for(i=0;i<S;i++)
	{
		for(j=0;j<S;j++)
		{
			sum=0;
			for(k=0;k<S;k++)
			{
				sum+=a[i][k]*b[k][j];
			}
			printf("%d ",sum);
		}
		printf("\n");
	}


	getch();

}