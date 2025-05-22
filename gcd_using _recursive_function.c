//finding GCD of two numbers using the Euclid's algorithm.
//GCD using recursive functions.

#include <stdio.h>

int gcd(int num1, int num2);

int main()
{
    int J,K,g ;
    printf("Enter any two values to find their greatest common divisor.\n");
    scanf("%d %d",&J,&K);

    g = gcd(J,K);

    printf("GCD of %d and %d is %d", J, K, g);

    return 0;
}

int gcd(int num1, int num2)
{
    if(num1 == 0)
        return (num2);
    if(num2 == 0)
        return (num1);
    if(num1>num2)
        return(gcd(num1%num2,num2));
    else
        return (gcd(num1, num2%num1));
}
