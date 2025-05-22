// Write a a function to calculate the area of the triangle.

#include <stdio.h>
#include<math.h>

float area(float a, float b, float c);

int main()
{
    float x,y,z,a;
    char repeat;

    do {

    printf("Enter the length of side1 = ");
    scanf("%f",&x);

    printf("Enter the length of side2 = ");
    scanf("%f",&y);

    printf("Enter the length of side3 = ");
    scanf("%f",&z);

    a= area(x,y,z);

    printf("The area of the triangle is = %.2f units sqr.\n",a);
    fflush(stdin);

    printf("Would you like to go again? y/n  ");
    scanf("%c",&repeat);
    //fflush(stdin);

    } while (repeat=='y');
//    return(A);


}

float area(float a, float b, float c)
{
    float S,A,B;

    S = (a+b+c)/2.0;

    B = (S*(S-a)*(S-b)*(S-c));
    if(B<0)
    {
        B*=-1;
    }

    A= sqrt(B);

    return (A);
}
