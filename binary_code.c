#include<stdio.h>

//Finding the binary equivalent of a positive integer.
//Using recursive function.

int binary(int);

int main()
{
    int m;

    do{
        printf("Enter a positive integer = ");
        scanf("%d",&m);

    } while(m<0);

    binary1(m);

    return 0;
}

int binary1(int a)
{
    int r;
    if(a==0 || a==1)
        printf("%d",a);
    else{
        r = a%2;
        binary1(a/2);
        printf("%d",r);
    }
}

