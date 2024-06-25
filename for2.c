#include<stdio.h>
#include<conio.h>

void main()
{
    int i;
    clrscr();

    for(i=1; i<=10; i++)
    {
        printf("\ni=%d",i);
    }
    printf("\nvalue of i outside for loop=%d",i);
    getch();
}