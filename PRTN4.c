#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,space,n;
    printf("Enter the num of lines:");
    scanf("%d",&n);

    space=n-1;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=space; j++)
        {
            printf(" ");
            for(j=1; j<=i; j++)
            {
                printf("%d",j);
            }
            printf("\n");
            space--;
        }
        getch();
    }
}