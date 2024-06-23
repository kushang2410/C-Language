#include<stdio.h>
#include<conio.h>

void main()
{
    int num,i,flag=1;
    clrscr();
    puts("enter the num");
    scanf("%d,&num");
    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            flag=0;
            break;
        }
        if(flag==1 && num>1)
        {
            printf("\nThe number %d is prime!",num);
        }
        else {
            printf("\nThe number %d is not prime!",num);
        }
        getch();
    }
}