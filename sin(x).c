#include<stdio.h>
#include<math.h>

float factorial(float);

int main()
{
   // printf("fact of %d is %f\n",13, factorial(13));
//    return 0;

    float a, power, mfactor=1;
    float total, term;


    printf("Calculation of sin(x) in RAD.\n");
    printf("The range of sin(x) in Rad is 0<x<3.14.\n");

    printf("Enter value of x in sin(x) = ");
    scanf("%f",&a);

    while (a>3.15 || a<0){
        printf("Enter value of x in sin(x) in the range 0-3.14 Only = ");
    scanf("%f",&a);
    }


    total=a;

    for(power=3;power<=19;power=power+2)
    {
      /*  if(power==1)
        {
            total= a;
           // printf("loop in if#1 total = %d ",total);
        }
        else
        {*/
          // printf("power before = %f\n",power);
           total = total - (pow(a,power)/factorial(power))*mfactor;
          // printf("power=%d\n",power);
           mfactor = mfactor*-1;
           //printf("fact of %f is %f\n",power, factorial(power));


    }

    printf("sin(x) = %f\n",total);



}

float factorial(float b )
{
    float a;
    a=b-1;
    for(;a>0;a--)
    {
        b=b*a;
    }
    return (b);
}
