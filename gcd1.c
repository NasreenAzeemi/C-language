//GCD using Euclid's Algorithm
//No pointer used
//Using a recalling function.

#include <stdio.h>
int gcd(int,int);

int main()
{
    int j,k,g;

    printf("Enter any two integers: \n");
    scanf("%d%d",&j, &k);

    g = gcd(j,k);

    printf("\nThe Greatest Common Divisor of %d and %d is %d\n",j,k,g);

    return 0;
}

int gcd(int a,int b)
{
    int remainder, quotient,factor;

    if(b==0)
    {
       factor = a;
    }
    else{
        quotient  = a/b;
    remainder = a - (quotient*b);

        while (remainder!=0)
        {
            a = b;
            b = remainder;
            quotient  = a/b;
            remainder = a - (quotient*b);
        }
        factor = b;
    }

    return (factor);

}

