#include<stdio.h>
#include"areaperi.h"

int main()
{
    float r1=3,a,r2=7.25;
    a=AofCIRCLE(r1);
    printf("%f\n",a);
    a=AofCIRCLE(r2);
    printf("%f\n",a);

//Absolute value:
    signed int v=-2,b=34,l;
    l=ABS(v);
    printf("%d\n",l);
    l=ABS(b);
    printf("%d\n",l);


    return 0;

}