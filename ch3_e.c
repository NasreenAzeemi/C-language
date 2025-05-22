#include <stdio.h>

//Finding the reverse number of an integer entered via the keyboard.

int main() {

  int n, reverse = 0, remainder;

  printf("Enter a five digit integer: ");
  scanf("%d", &n);

  while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
    //printf("In Loop");
  }

  printf("Reversed number = %d", reverse);

  return 0;
}
