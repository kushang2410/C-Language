#include<stdio.h>
#include<conio.h>

void main()
{
    int i;
    clrscr();

    for(i=10; i>=1; i--)
    {
        printf("\ni=%d",i);
    }
    printf("\nvalue of i outside for loop=%d",i);
    getch();
}