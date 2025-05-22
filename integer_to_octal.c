#include <stdio.h>

//Program converts decimal to octal using C.
//No one can mess with this code Muhahahaaa!!!

int main()
{
    int n, oct = 0, rem = 0, place = 1;

    printf("Enter an integer (whole number): ");


    char term;

    if(scanf("%d%c", &n, &term) != 2 || term != '\n')
        printf("failure... Must enter a whole number.\n");
    else {
        printf("A valid integer followed by enter key!\n");

        printf("\nOctal Equivalent of %d is...\n", n);

    while (n)
    {
        rem = n%8;
        oct = oct + rem *place;
        n = n/ 8;
        place*=10;
        //printf("loading... \n");
    }
    }
    printf("%d\n", oct);

return 0;
}
