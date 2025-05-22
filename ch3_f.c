#include <stdio.h>
#include <math.h>

// Code to figure which brother is the youngest once the age is input via the keyboard.

int main() {

        int a,b,c;

        printf("What is the age of Ram? ");
        scanf("%d",&a);

                printf("What is the age of Shyam? ");
        scanf("%d",&b);

                printf("What is the age of Ajay? ");
        scanf("%d",&c);


        // && AND logic
        // || OR logic
        if(a<b&&a<c)
            printf("Ram is the youngest of the three.");

       else {
        if(b<a&&b<c)
            printf("Shyam is the youngest of the three.");
        else {
            printf("Ajay is the youngest of the three.");
        }
       }

return 0;
}

