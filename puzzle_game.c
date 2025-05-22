#include <stdio.h>
#include <windows.h>
#include <conio.h>

//scan codes for arrow keys
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

void gotoxy(short, short);
int getkey();
void swap(int*, int*);
void printNumber(int x, int y, int num) {
    gotoxy(x, y);
    printf("%2d ", num);  // Ensure we print with enough space
}

void main()
{
    int ar[4][4] = {
        1,5,3,12,
        7,6,11,10,
        9,4,2,13,
        8,14,15, /*0 is the blank space*/
    };

    int x[4];
    int y[4];
    char key;
    int i,j,ci,cj,var_temp;
    int currPos[2]={0,0};
    int nextPos[2]={0,0};
    system("cls");

    printf("To quite press 'q'");

    for(i=0 ; i<4 ; i++)
    {
        for(j=0 ; j<4 ; j++)
        {
            gotoxy(4*(j+1),2*(i+1));

            if(ar[i][j]==0)
            {
                printf(" ");
            }
            else{
                printf("%d",ar[i][j]);
            }

        }
        //printf("\n\n");
    }
    currPos[0]=4*(j);
    currPos[1]=2*(i);

    nextPos[0]=4*(j);
    nextPos[1]=2*(i);


    for(i=0 ; i<4 ; i++)
    {
        y[i] = 4*(i+1);
        x[i] = 2*(i+1);
    }

    ci=3;
    cj=3;
    i=3;
    j=3;
    key = getkey();

    while(key!='q')
    {

        switch(key){
        case UP:
        i=ci;
        j=cj;
            ci--;
            if(ci<0)
                ci=0;

          //  swap(&ar[i][j],&ar[i][j]);
            //printf("%d",cj);
            break;

        case DOWN:
            i=ci;
        j=cj;
            ci++;
            if(ci>3)
                ci=3;
            //printf("%d",cj);
            break;

        case LEFT:
            i=ci;
        j=cj;
            cj--;
            if(cj<0)
                cj=0;
            //printf("%d",ci);
            break;

        case RIGHT:
            i=ci;
        j=cj;
            cj++;
            if(cj>3)
                cj=3;
            //printf("%d",ci);
            break;
        }
        if(ar[ci][cj]==0){
            var_temp = ar[i][j];
            ar[i][j] = ar[ci][cj];
            ar[ci][cj] = var_temp;
            swapOnScreen(ar,i,j,ci,cj);
        }
gotoxy(4*6, 4);
printf("                                              ");
gotoxy(4*6, 4);
printf("i:%d j:%d arr[i][j]:%d | ci:%d cj:%darr[ci][cj]:%d",i,j,ar[i][j],ci,cj,ar[ci][cj]);

//        gotoxy(x[ci],y[cj]);

        // for debugging
//        gotoxy(20,10);
//        printf("%d\t%d",ar[i][j],ar[cj][ci]);
/*        currPos[0]=nextPos[0];
        currPos[1]=nextPos[1];
        nextPos[0]=x[ci];
        nextPos[1]=y[cj];
*/
        //if(key==' ')



        gotoxy(y[cj],x[ci]);
        key=getch();
        win(&ar);
    }

 /*   for(i=0 ; i<4 ; i++)
    {
        for(j=0 ; j<4 ; j++)
        {
            if(i==ar[i]-1 || ar[4][4]==0)
            {
                printf("\nGame Over!");
            }
        }
    }
*/

space(ar[i][j]);

    return 0;

}


void gotoxy(short col, short row)
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position = {col,row};
    SetConsoleCursorPosition(h,position);
}

int getkey()
{
    int ch;
    ch = getch();

    if(ch==0)
    {
        ch = getch();
        return ch;
    }
    return ch;
}

//function to swap numbers
void swap(int *a, int *b)
{
    int x;
    x = *a;
    *a = *b;
    *b = x;
}

void swapOnScreen(int ar[4][4], int x1, int y1, int x2, int y2){


    gotoxy(4*(y1+1),2*(x1+1));
    printf("  ");
    gotoxy(4*(y1+1),2*(x1+1));
    printf("%d",ar[x1][y1]);

    gotoxy(4*(y2+1),2*(x2+1));
    printf("  ");
    gotoxy(4*(y2+1),2*(x2+1));
    printf("%d",ar[x2][y2]);

}

void win(int ar[4][4]) {
    int i, j;
    int count = 1;
    for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 4; j++)
            {
                if (i == 3 && j == 3)
                {
                    if (ar[i][j] != 0)
                    {
                        return;
                    }
                }
            else{
                    if (ar[i][j] != count)
                    {
                        return;
                    }
                    count++;
                }
            }
    }

printf("\n\n\nCongrats!");

return 0;
}

void space(int*a)
{
    if(*a==0)
    {
        printf(" ");
    }
}
