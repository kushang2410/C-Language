#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b, choice;
    clrscr();
    do {
        printf("\nEnter 1 to add\nEtner 2 to sub\nEnter 3 to multiplying \nEnter 4 to division \nEnter your choice");
        scanf("%d",&choice);
        if(choice>=1 && choice<=4)
        {
            printf("a:");
            scanf("%d",&a);
            printf("b:");
            scanf("%d",&b);
        }
        switch(choice)
        {

        case 1:
            printf("\nThe additional of %d + %d = %d",a,b,(a+b));
            break;

        case 2:
            printf("\nThe subtraction of %d - %d = %d",a,b,(a-b));
            break;

        case 3:
            printf("\nThe multiplying of %d x %d = %d",a,b,(a*b));
            break;

        case 4:
            printf("\nThe dividend of %d / %d = %f",a,b,((float)a/b));
            break;

        case 5:
            printf("\nthank you");
            break;

        default:
            printf("\nInvalid choice");
        }
    } while(choice=5);
    getch();
}