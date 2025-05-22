#include <stdio.h>

//here we are testing is the number entered by the keyboard is even or odd

int main(){
int i;
printf("Enter any one whole number: ");
scanf("%d",&i);

if (i%2==0)
    printf("The number you entered is an even number");
else
    printf("The number you have entered is an odd number");
return 0;
       }
