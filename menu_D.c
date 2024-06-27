#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b, choice;
    clrscr();
    printf("\nEnter 1to add\nEtner to sub\nEnter your choice");
    scanf("%d",&choice);
    if(choice==1 || choice==2)
    {
        printf("a:");
        scanf("%d",&a);
        printf("b:");
        scanf("%d",&b);
    }
    if(choice==1)
    {
        printf("\nThe additional of %d + %d = %d",a,b,(a+b));
    }
    else if(choice==2)
    {
        printf("\nThe subtraction of %d - %d = %d",a,b,(a-b));
    }
    else
    {
        printf("\nInvalid choice");
    }
    getch();
}