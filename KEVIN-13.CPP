#include<stdio.h>
#include<conio.h>

main()
{
    clrscr();
    int x=3,y=9,xy;

    xy=(x*x*x)+((3*x*y)*(x+y))+(y*y*y);
    printf("(x+y)3=%d",xy);

    getch();

}