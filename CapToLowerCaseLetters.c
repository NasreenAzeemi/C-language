#include<stdio.h>
#include"capLow.h"

int main()
{
    char c,lower;
    do{
        fflush(stdin);
        printf("Enter any Capital letter: ");
        scanf("%c", &c);     
    }while(CAPITAL(c));

    lower=UPTOLOW(c);

    printf("Lowercase of %c is %c\n",c,lower);

    return 0; 
}