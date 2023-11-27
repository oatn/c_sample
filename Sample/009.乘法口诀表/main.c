/*
& "D:\dev\tcc\tcc.exe" -run .\main.c
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

void gotoxy(short x, short y) {
    COORD coord = {
        x,
        y
    };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void clrscr(void) {
    system("cls");
}

int main(void) {
    int i, j, x, y;

    clrscr();
    printf("\n\n  * * * Chinese Nine Nine Multiplication Table * * * \n\n");
    x = 9;
    y = 5;
    for (i = 1; i <= 9; i++) {
        gotoxy(x, y);
        printf("%2d ", i);
        x += 3;
    }
    x = 7;
    y = 6;
    for (i = 1; i <= 9; i++) {
        gotoxy(x, y);
        printf("%2d ", i);
        y++;
    }
    x = 9;
    y = 6;
    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= 9; j++) {
            gotoxy(x, y);
            printf("%2d ", i * j);
            y++;
        }
        y -= 9;
        x += 3;
    }
    printf("\n\n");
    return (0);
}