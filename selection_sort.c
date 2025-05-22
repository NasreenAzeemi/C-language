/* This is called #success in sorting 101 */
#include <stdio.h>

int main()
{
    int i,j,m,a[25];
    printf("Enter 25 integers: ");
    for(i=0 ; i<=24 ; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0 ; i<=23 ; i++)
    {
        for(j=i+1 ; j<=24 ; j++)
        {
            if(a[i]>a[j])
            {
                m = a[i];
                a[i] = a[j];
                a[j] = m;
            }
        }
    }
    printf("After Sorting:\n");
    for(i=0 ; i<=24 ; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
