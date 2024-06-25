#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int year;

    printf(" >> nhap nam muon kiem tra: ");
    scanf("%d", &year);
    if (year % 400 == 0)
    {
        printf(" >> %d la nam nhuan the ky !\n", year);
    }
    else
    {
        if (year % 100 == 0)
        {
            printf(" >> %d la nam the ky !\n", year);
        }
        else if (year % 4 == 0)
        {
            printf(" >> %d la nam nhuan !\n", year);
        }
        else
        {
            printf(" >> %d la nam thuong !\n", year);
        }
    }
}