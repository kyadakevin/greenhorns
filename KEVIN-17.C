#include<stdio.h>
#include<conio.h>

main()
{
    int x=3,y=9,z=3,xyz;
    clrscr();
  xyz=(x*x)+(y*y)+(z*z)/(2*(x*y)+(y*z)+(z*x));
    printf("(x+y+z)^2=%d",xyz);

    getch();

}

