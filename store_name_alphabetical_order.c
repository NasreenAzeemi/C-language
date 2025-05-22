#include <stdio.h>
#define MAX 100

int main()
{
    int i,j,number;
    char names[MAX][100];
    printf("If more than specified are entered, only the first ones within the range will be sorted.\n");
    printf("How many number of names do you want to enter? ");
    scanf("%d",&number);

    printf("Enter names\n");

    for(i=0 ; i<number ; i++)
    {
        scanf("%s",names[i]);
    }

    //bubble sort ;)
    for(i=0 ; i < number-1 ; i++)
    {
        for(j=0 ; j < number-i-1 ; j++)
        {
            if(strcmp(names[j],names[j+1]) >0){
                char temp[100];
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
    printf("\nSorted:\n");
    for(i=0 ; i<number ; i++)
    {
        printf("%s\n",names[i]);
    }

    return 0;
}

