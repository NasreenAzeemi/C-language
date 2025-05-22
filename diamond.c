#include <stdio.h>
int main()
{
    int i,j,rows,x;
    // code for a diamond emoji ♦
    char s='\4'; 

    printf("Enter the base (half rows) of your diamond: ");
    scanf("%d",&rows);
    int total_rows = (rows*2)-1;

    for(i=1; i<=total_rows ; i++) {
        if(i<=rows)
            x=i;
        else
            x--;

        for(j=1; j<=rows+x-1 ; j++)
        {
            if(j<=rows-x)
            {
                printf(" "); 
            }
            else{
                printf("%c",s); 
            }

        }

        printf("\n");
}

    }
