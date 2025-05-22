#include <stdio.h>
#include <math.h>

// In the Georgian calendar 01/01/01 was on Monday
//Here we are writing a program to find the day on the 1st of January of any year input by the keyboard

int main() {
        float F,k=11,D,C;

        printf("Enter the first two digits of your year: ");
        scanf("%f",&C);

        printf("Enter the last two digits of your year: ");
        scanf("%f",&D);

        D=D-1;

        F=k+ (142/5) +D+ (D/4) +(C/4)-2*C;

        int a=(int)F%7;



        printf("%d",a);



return 0;
}
