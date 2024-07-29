#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");
    char level;
    int bonus;

    printf(">> nhap bac luong cua NV [a-d]: ");
    scanf("%c", &level);

    switch (level)
    {
    case 'a':
    case 'A':
        bonus = 100;
        break;
    case 'b':
    case 'B':
        bonus = 500;
        break;
    case 'c':
    case 'C':
        bonus = 800;
        break;
    case 'd':
    case 'D':
        bonus = 1000;
        break;
    default:
        bonus = 0;
        break;
    }

    printf(">> bac luong [%c] => thuong = [%d]\n", level, bonus);
}