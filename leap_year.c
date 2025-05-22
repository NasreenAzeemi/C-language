#include <stdio.h>
#include <math.h>

//determine whether year is leap or not using logical operators.

int main() {
 int a;

 printf("Enter a year to know if it is a leap year. ");
 scanf("%d",&a);

 (a%4==0 || (a%400==0) ? printf("The year %d is a leap year",a) : (printf("The year is not a leap year.")));

//A leap year is divisible by 4 and definitely is a leap if divisible by 400.

return 0;
}
