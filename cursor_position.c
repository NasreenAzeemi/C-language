#include <stdio.h>
#include <windows.h>
void gotoxy(short int col, short int row);

int main()
{
    system("cls");
    gotoxy(30,1);
    printf("Hello there!");
    return 0;
}

void gotoxy(short int col, short int row)
{
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position = {col,row};
    SetConsoleCursorPosition (hStdout,position);
}


