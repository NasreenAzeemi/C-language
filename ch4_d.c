#include <stdio.h>
#include <math.h>

int main() {
    int a,b,c,d;

    printf("This program will check whether the side lengths make up a valid triangle or not.\n ");
    printf("Enter your first length: ");
    scanf("%d",&a);

    printf("Enter your second length: ");
    scanf("%d",&b);

    printf("Enter your third length: ");
    scanf("%d",&c);

    if ((a>b)&&(a>c))
        d= b+c;
    else { if((b>c)&&(b>a))
        d= a+c;
    else
        d=a+b;

    }
printf("Data is loading... d=%d\n",d);

//check for error in the following code...
//Code after "else" not working properly.

    if (((d=b+c) && d>a) || ((d=a+c)&&d>b) || ((d=a+b)&&d>c))
    printf("Triangle is valid!");
    else
        printf("Triangle is NOT valid ");



return 0;
}

