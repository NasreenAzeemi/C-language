#include <stdio.h>
/* Macros mit Argument 1:
#define AREA(x)(3.14*x*x)

int main()
{
    float r1=6.25, r2=2.5,a;

    a=AREA(r1);
    printf("Area of circle = %f\n",a);
    a=AREA(r2);
    printf("Area of circle = %f\n",a);
    return 0;
}
*/

/* Macros mit Argument 2 */
/* DIGIT is range in ASCII code not number range bro */
#define DIGIT(y)(y >= 48 && y<=87)
int main()
{
    char ch,s;

    printf("Enter any digit: ");
    scanf("%c",&ch);

    if(DIGIT(ch))
        printf("You entered a digit %c",s=1);
    else
        printf("You are illegal\n");
    return 0;
}
