#include<stdio.h>

int main()
{
    int n,q;

    printf("The program will print a multiplication table of a number.\n");
    printf("Enter a number: ");
    scanf("%d",&n);

    for(q=1; q<=10; ++q)
    {
        printf("%d * %d = %d\n",n,q,n*q);
    }
    return 0;

}
