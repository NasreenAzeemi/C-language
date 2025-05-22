#include <stdio.h>
#include <math.h>

int main()
{
    printf("The program will calculate the sum of the first seven terms of the series from which the natural logarithm can be approximated.\n");
   /* float x,a,sqr,cube,four,five, six, svn, total_1;

    printf("Enter the value for x: ");
    scanf("%f",&x);

    a=(x-1)/x;
    sqr = a*a;
    cube = a*a*a;
    four = sqr*sqr;
    five = cube*sqr;
    six = cube*cube;
    svn = six*a;

    total = a + 0.5* (sqr + cube + four + five + six + svn);

    printf("%.6f", total_1);
    */


    // code below using loop
    int power;
    float b,term,total;

    printf("Enter the value of x: ");
    scanf("%f",&b);

    term = (b-1)/b;

    for(power=1 ; power<=7 ; power++ )
    {
        if (power==1)
        {
            total = term;
           // printf("number 1 %f\n",total);
        }

        else
        {
            total = total + pow(term, power) *0.5;
            // printf("Number 2 %f\n",total);
        }


    }

    printf("%.6f", total);

}
