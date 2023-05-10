#include<stdio.h>
#include<conio.h>

main()
{
    int x=3,y=9,z=3,xyz;
    clrscr();
  xyz=(x*x*x)+(y*y*y)+(z*z*z)+(3*(x+y)*(y+z)*(z+x));
    printf("(x+y+z)3=%d",xyz);

    getch();

}

