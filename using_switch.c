#include <stdio.h>

int main() {
  int day;
  printf("Enter a number from 1-7 ");
  scanf("%d",&day);

  //((day>7 || day==0) ? printf("Error! Must write a number in the given range.\n"): printf("correct!\n")  );

  switch (day) {
    case 1:
      printf("Monday");
      break;
    case 2:
      printf("Tuesday");
      break;
    case 3:
      printf("Wednesday");
      break;
    case 4:
      printf("Thursday");
      break;
    case 5:
      printf("Friday");
      break;
    case 6:
      printf("Saturday");
      break;
    case 7:
      printf("Sunday");
      break;

    default:
        printf("Error! Must enter a number withing the given range.\n");
  }

    return 0;
}
