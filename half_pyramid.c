//Printing a half pyramid of numbers in descending order.
//replacing print var j with print * will print the half-pyramid in *.
#include <stdio.h>
int main() {
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);

   for (i = 1; i <= rows; ++i) {
      //  printf("%d",i);
      for (j = i; j >= 1; j--) {
         printf("* "); // j%2 gives pyramid in 1s and 0s

      }
      printf("\n");
   }
   return 0;
}
