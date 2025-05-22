#include <stdio.h>
#include <math.h>

int main() {
    int l,w,a,p;

    printf("This program will identify whether the area of a rectangle is greater than its perimeter.\n");
        printf("Enter the length os the rectangle: ");
        scanf("%d",&l);

        printf("Enter the width of the rectangle: ");
        scanf("%d",&w);

            a=l*w;
            p=2*(l+w);

                if(a>p)
                    printf("The area (%d) is GREATER than its perimeter (%d).",a,p);
                else
                    printf("The area (%d) is SMALLER than its perimeter (%d).\n",a,p);


return 0;
}

