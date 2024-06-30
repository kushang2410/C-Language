#include<stdio.h>
#include<conio.h>

void main()
{
    int num,i,sum=0;
    clrscr();
    puts("enter the sum");
    scanf("%d",&num);
    for(i=1; i<num; i++)
    {
        if(num%i==0)
        {
            sum+=i;
        }
    }
    if(sum==num)
    {
        printf("\nThe number %d is perfect!",num);
    }
    else {
        printf("\nThe number %d is not perfect",num);
    }
    getch();
}