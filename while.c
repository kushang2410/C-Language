#include<stdio.h>
#include<conio.h>

void main()
{
    int i=1;
    clrscr();

    while(i<=10)
    {
        i++;
        printf("\ni=%d",i);
    }
    printf("\nvalue of i outside for loop=%d",i);
    getch();
}