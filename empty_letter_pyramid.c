#include <stdio.h>

int main()
{
    int i=1,j,k,blank=0,x=71,w;

    while(i<=7)
    {
        j=65;
        w=x;
        while(j<=w)
        {
            printf(" %c ",j);
            j++;
        }
        if(i==1)
            w--;
        k=1;

        while(k<=blank)
        {
            printf("   ");
            k++;
        }
        blank = 2*i-1;

        while(w>=65)
        {
            printf(" %c ",w);
            w--;
        }
        printf("\n");
        x--;
        i++;
    }
    return 0;
}
