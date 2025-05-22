#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *names[6];
    char n[50];
    int len, i;
    char*p;
    for(i=0 ; i<6 ; i++)
    {
        printf("Enter name ");
        scanf("%s",n);
        len = strlen(n);
        p = (char*)malloc(len+1); /* +1 to accomomdate \0*/
        strcpy(p,n);
        names[i] = p;
    }
    printf("\nThe 6 Family members names:\n");
    for(i=0 ; i<6 ; i++)
    {
        printf("%s\n",names[i]);
    }
    return 0;
}
