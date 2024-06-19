#include<stdio.h>
#include<conio.h>
#define S1 4
#define S2 3
int main()
{
	int a[S1][S2],i,j,b[S1*S2],temp,idx=0;
	for(i=0;i<S1;i++)
	{
		for(j=0;j<S2;j++)
		{
			printf("Enter the element at a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
			b[idx++]=a[i][j];
		}
	}



	for(i=0;i<S1*S2-1;i++)
	{
		for(j=0;j<S1*S2-1;j++)
		{
			if(b[j]>b[j+1])
			{
				temp=b[j];   // swap
				b[j]=b[j+1];
				b[j+1]=temp;
			}

		}
	}

	idx=0; // reset

	for(i=0;i<S1;i++)
	{
		for(j=0;j<S2;j++)
		{
			a[i][j]=b[idx++];
			printf("%5d ",a[i][j]);
		}
		printf("\n");
	}

	getch();

}