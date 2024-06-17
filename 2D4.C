#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][4]={{1,-2,3,77},{77,4,5,66},{-77,77,8,-9}},srch;
	int i,j,count=0;
	clrscr();
	puts("Enter the ele to be searched:");
	scanf("%d",&srch);

	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			if(a[i][j]==srch)
			{
				count++;
				printf("\nThe element %d found at a[%d][%d]",srch,i,j);
			}
		}
	}
	if(count==0)
	{
		printf("\nThe element %d not found",srch);
	}
	else
	{
		printf("\nTotal number of occurrences=%d",count);
	}
	getch();
}