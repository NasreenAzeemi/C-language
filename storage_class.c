#include <stdio.h>
/* Increment using Static Storage Class -*/
void increment();
int main()
{
    increment();
    increment();
    increment();
    return 0;
}
void increment()
{
    static int i = 1;
    printf("%d\n",i);
    i=i+1;

}

/* Increment using auto storage class
void increment();
int main()
{
    increment();
    increment();
    increment();
    return 0;
}
void increment()
{
    static int i = 1;
    printf("%d\n",i);
    i=i+1;

}
  */
