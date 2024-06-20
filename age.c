#include<stdio.h>
#include<conio.h>

void main()
{
    int age;
    x:

    printf("Enter the age !");
    scanf("%d",&age);
    if(age<=0)
    {
        printf("\nInvalid age\nPlease enter the correct age\n");
        goto x;
    }
    if(age<18)
    {
        printf("\nThe person is minor");
    }
    else if(age>=18 && age<=60)
    {
        printf("\nThe person is adult");
    }
    else
    {
        printf("\nThe person is senior citizens");
    }

    getch();
}