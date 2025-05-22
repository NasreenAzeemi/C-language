//Finding the first day of each year in gorgeon calender 
#include<stdio.h>

int main()

{

    int leapdays,firstday,yr;

    long int normaldays,totaldays;

    printf("Enter a year:");

    scanf("%d",&yr);

    normaldays= (yr-1)*365L; /*A long constant is written with a terminal l (ell) or L,
     as in 123456789L ; an integer constant too big to fit (more than 4 digits)
     into an int will also be taken as a long .*/

    leapdays=(yr-1)/4- (yr-1)/100+(yr-1)/400;

    totaldays=normaldays+leapdays;

    firstday=totaldays%7;

    if(firstday==0)
    {
      printf("monday");
    }
    if(firstday==1)
    {
      printf("tuesday");
    }
    if(firstday==2)
    {
      printf("wednesday");
    }
    if(firstday==3)
    {
      printf("thursday");
    }
    if(firstday==4)
    {
      printf("friday");
    }
    if(firstday==5)
    {
      printf("saturday");
    }
    if(firstday==6)
    {
      printf("sunday");
    }



    return 0;

}

