//generates all the Pythagorean Triplets for lengths less than or equal to 30

#include<stdio.h>

int main()
{
    int length,a,b;


    for(length=1 ; length<=30 ; length++ )
    {
        for(a=1 ; a<= length ; a++ )
        {
            for(b=1 ; b<= length ; b++)
            {
                if((a*a) + (b*b) > (length*length) || (a*a) + (b*b) < (length*length) || (a*a) + (b*b) != (length*length))
                {
                    continue;
                }
                else{
                    printf("%d,%d,%d\n",a,b,length);
                }
            }
        }
    }


}
