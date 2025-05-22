/*Odd loop using a for loop*/
//Odd lop using while loop are similar, instead of for() you would use while(another=='y') {so on...}
#include <stdio.h>

int main()
{
    char another = 'y';
    int num;
    for(; another=='y';)
    {
        printf("Enter a number ");
        scanf("%d",&num);
        printf("square of %d is %d\n",num,num*num);
        printf("Want to enter another number y/n ");
        fflush(stdin);
        scanf("%c",&another);
    }
    return 0;
}
