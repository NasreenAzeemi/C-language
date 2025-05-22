#include <stdio.h>
#include <math.h>

int main() {
    //to determine whether character entered from the keyboard is a digit capital/small letter or a special symbol.

   /* char ch;

    printf("Enter any character: ");
    scanf("%c",ch);

    (ch>='A' && ch<='Z' ? (printf("You entered a capital letter!")) : (ch>='a' && ch<='z' ? (printf("You have entered a small case letter!"))
                                                                       : (ch>='0' && ch<='9' ? (printf("You have entered the number %c",ch))
                                                                          : (printf("You have entered a symbol!")))));

*/
/**
 C program to check whether a character is uppercase or lowercase
 */

    char ch;

    /* Input character from user */
    printf("Enter any character: ");
    scanf("%c", &ch);


    if(ch >= 'A' && ch <= 'Z')
    {
        printf("'%c' is uppercase alphabet.", ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("'%c' is lowercase alphabet.", ch);
    }
    else
    {
        printf("'%c' is not an alphabet.", ch);
    }

    return 0;
}
