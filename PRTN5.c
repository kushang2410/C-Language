#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,k,n;
    clrscr();
    printf("Enter the num of lines:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=n; j>i; j--)
        {
            printf(" ");
        }
        for(k=1; k<=i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    getch();
}