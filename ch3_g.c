#include <stdio.h>
#include <math.h>

int main() {
    int sid1,sid2,sid3,sum;

printf("This is a program to check whether the a triangle is valid or not.\n");
printf("It works by summing all the angles to see if they match 180 degrees, which is the total sum of any triangle.");
    printf("Enter the angle of side 1 for your triangle: ");
    scanf("%d",&sid1);

    printf("Enter the angle of side 2: ");
    scanf("%d",&sid2);

    printf("Enter the angle of side 3: ");
    scanf("%d",&sid3);

    sum=sid1+sid2+sid3;

    if(sid1+sid2+sid3==180)
        printf("The sum of all the angles you have entered is equal to 180 degrees, hence it is a valid triangle!");
    else
        printf("%d degrees is NOT equal to 180 degrees, hence it is NOT a valid triangle.",sum);


return 0;
}
