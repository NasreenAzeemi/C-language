#include <stdio.h>

int main()
{
    int i,j,ar[5][5];
    for(i=0;i<=4;i++)
    {
        
        for(j=0;j<=4;j++)
        {
            printf("Enter a whole number ");
            scanf("%d",&ar[i][j]);
        }
        printf("\n");
    }
   /*Checking if all values stored in array ar[5][5]*/
    /*
    for(i=0;i<=4;i++)
    {
        for(j=0 ; j<=4 ; j++)
            printf("%d ",ar[i][j]);
    printf("\n");
    } */

    int max;
    max=ar[0][0];
    for(i=0 ; i<=4 ; i++)
    {
        for(j=0 ; j<=4 ; j++)
        {
            if(ar[i][j]>max)
                max = ar[i][j];
        }
    }
    printf("The largest number in the matrix is %d\n",max);

    return 0;

}