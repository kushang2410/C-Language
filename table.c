#include<stdio.h>
#include<conio.h>
void main()
{
    int start=15, i, end;
    clrscr();
    printf("start=1\n");
    printf("end=");
    scanf("%d", &end);

    for(i=1; i<=end; i++)
    {
        printf("%d * %d = %d\n", start,i,start*i);
    }
}