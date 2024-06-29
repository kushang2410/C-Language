#include<stdio.h>
#include<conio.h>

void main()
{
    int num;
    clrscr();
    puts("Enter any number to check if it is divisible by 3 and 5 :");
    scanf("%d",&num);

    if(num%3==0)
    {
        if(num%5==0)
        {
            printf("\nThe number %d is divisible by 3 and 5 both",num);
        }
        else {
            printf("\nThe number %d is not divisible by 3 and 5 both",num);
        }
    }
    else {
        printf("\nThe number %d is not divisible by 3 and 5 both",num);
    }
    getch();
}