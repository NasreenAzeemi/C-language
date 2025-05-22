#include <stdio.h>
#include <math.h>

int main() {
    int a;

    printf("Enter any negative number and I will convert it into its positive: ");
    scanf("%d",&a);

    a=a*-1;

    printf("The absolute value is %d",a);

return 0;
}
