#include <stdio.h>
#include <conio.h>
#include <windows.h>

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void printNumber(int x, int y, int num) {
    gotoxy(x, y);
    printf("%2d ", num);  // Ensure we print with enough space
}

unsigned int dayOfweek(int, int,int);

int main()
{
    int year, month, date=1;

    printf("Enter date month and year ");
    scanf("%d %d",&month,&year);

    int days_array[]={'Sunday','Monday','Tuesday','Wednesday','Thursday','Friday','Saturday'};
    int ar[4][4] = {
        1,4,15,7,
        8,10,2,11,
        14,3,6,13,
        12,9,5,0,};

    system("cls");  // Clear screen
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printNumber(j * 3, i, ar[i][j]);
        }
    }

    dayOfweek(date, month, year);

    return 0;

}

unsigned int dayOfweek(int date, int month, int year)
{
    int m; //month (1-Mar,...,10-Dec,11-Jan,Feb-12)
    int C = year/100; //first two digits of the year
    int Y = year%100; //last two digits of the year
    int W;

    int a = (Y/4) + date;
    printf("value a %d\n",a);

    if(month ==1 || month ==10)
    {
        a += 1;
        printf("loop 1 %d\n",a);
    }
    if(month ==2 || month ==3 || month ==11)
    {
        a += 4;
        printf("loop 2 %d\n",a);
    }
    if(month ==5)
    {
        a += 2;
        printf("loop 3 %d\n",a);
    }
    if(month ==6)
    {
        a += 5;
        printf("loop 4 %d\n",a);
    }
    if(month ==8)
    {
        a += 3;
        printf("loop 5 %d\n",a);
    }
    if(month ==9 || month ==12)
    {
        a += 6;
        printf("loop 6 %d\n",a);
    }
    if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
    {
        if(month ==1 || month ==2)
        {
            a -= 1;
            printf("loop 7 %d\n",a);
        }
    }

    if(C==20)
    {
        a += 6;
        printf("loop 8 %d\n",a);
    }
    if(C==17)
    {
        a += 4;
        printf("loop 9 %d\n",a);
    }
    if(C==18)
    {
        a += 2;
        printf("loop 10 %d\n",a);
    }

    int b;
    b = a+Y;
    printf("value b %d\n",b);
    W = b%7;
    printf("value W %d\n",W);

    return(W);
}
