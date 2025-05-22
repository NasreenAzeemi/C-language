#include<stdio.h>

int fibonacci(int);

int main()
{
    int x=25;

    for(int i=1; i<=x ; i++)
    {
        printf("%d ",fibonacci(i));
    }

    return 0;
}

int fibonacci (int n)
{
    long a=1,b,i;

    if(n==0)
        return 0;
    if(n==1)
        return 1;
    else
    {
        return (fibonacci(n-1) + fibonacci(n-2));
    }




}

