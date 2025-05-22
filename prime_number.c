#include <stdio.h>

int main()
{
    int num, i;

    printf("Enter a number: ");
    scanf("%d",& num);

    i=2;
    while(i<= num-1)
        if(num%i ==0)
        {
            printf("Not a prime number\n");
            break;
        }
        i++ ;


    if(i==num)
        printf("Prime number\n");
/*for (int i = 0; i < 10; i++) {
  if (i == 4) {

continue
;
  }
  printf("%d\n", i);
}
^^ In the following loop, when the value is "4", jump directly to the next value.
This is done using the operand continue.
So the value of 4 is not printed as it is jumped to the next value which is 5, so 5 is printed.
*/
        return 0;
}
