/*Execution of a loop an unknown number of times*/
#include <stdio.h>

int main() {
  char another;
  int num;
  do
  {
  	printf("Enter a number ");
    scanf("%d",&num);
    printf("square of %d is %d\n",num,num*num);
    printf("Want to enter another number y/n ");
    fflush(stdin); // fflush() removes the temporary value stored from the standard input device (stdin): the keyboard
        // Which would be the first value entered via the keyboard
    scanf("%c",&another);
  }	while(another=='y');

  return 0;
}
