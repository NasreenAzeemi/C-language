#include <stdio.h>

int main()
{
    int num, i;

    printf("All prime numbers from 2 - 300 are as follows\n");
    for(num=2 ; num<=300;num++)
    {
        for(i=2;i<=num/2;i++)
        {
            if(num%i==0)
                break;
        }
        if(i>num/2)
            printf("%d\n",num);
    }
    return 0;
}
