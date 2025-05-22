#include <stdio.h>
#include <math.h>

int main() {
        int h,t,grade;
        float c;

        printf("Program to grade a steel metal.");
        printf("Enter the hardness of the steel: ");
        scanf("%d",&h);

        printf("Enter the carbon content of the steel (in 0.#) : ");
        scanf("%.1f",&c);

        printf("Enter the tensile strength of the steel (in thousands) : ");
        scanf("%d",&t);

        if (h>50 && c<0.7 && t>5600)
            printf("The grade of the steel is 10!");
         else{
              if (h>50 && c<0.7)
                grade = 9;
              else if (c<0.7 && (t>5600))
                grade=8;
              else if (h>50 && t>5600)
                grade =7;
              else if(h>50 || c<0.7 || t>5600)
                grade =6;
              else
                grade =5;
                                                                                   )
         }


                                                                                    printf("The grade of your steel is %d",grade);

return 0;
}

