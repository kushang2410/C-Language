#include<stdio.h>
#include<conio.h>

void main()
{
    int num,i,sum=0,start,end;
    clrscr();
    puts("enter the start");
    scanf("%d",&start);
    puts("enter the end");
    scanf("%d",&end);
    for(num=start; num<=end; num++)
    {
        sum=0;
        for(i=1; i<num; i++)
        {
            if(num%i==0) {
                sum+=i;
                printf("\n the number %d is prime!");

            }
            if(sum==num) {
                printf("\n the number %d is perfect!");

            }
        }

    }
    getch();
}