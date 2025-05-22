#include<stdio.h>
float factorial(float);

int main()
{
    int z;
    printf("Enter a value= ");
    scanf("%d",&z);
    factorial(z);
}

float factorial(float b )
{
    float a;
    a=b-1;
    for(;a>0;a--)
    {
       // printf("Value of b before= %d",b);
        b=b*a;
        //printf("Value of b=%f\n",b);
        //printf("Value of a=%f\n",a);
    }
    printf("factorial = %.1f",b);

}

