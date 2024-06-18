#include<stdio.h>
#include<conio.h>
int main()
{
	int a[3][4]={{1,-2,3,77},{77,4,5,66},{-77,77,8,-9}};
	int i,j;

	X:
	puts("Enter the row index:");
	scanf("%d",&i);
	if(i<0 || i>2)
	{
		printf("\nThis is an invalid index\nplz enter again!");
		goto X;
	}
	Y:
	puts("Enter the column index:");
	scanf("%d",&j);
	if(j<0 || j>3)
	{
		printf("\nThis is an invalid index\nplz enter again!");
		goto Y;
	}

	printf("\nThe peeped element = %d",a[i][j]);


	getch();
}