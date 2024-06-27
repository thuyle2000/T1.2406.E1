#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");

    int n;
    while (1 == 1)
    {
        printf(" nhap so nguyen N [5-10]: ");
        scanf("%d", &n);
        if (n >= 5 && n <= 10)
            break;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%2d ", j + 1);
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf("%2d ", j + 1);
        }
        printf("\n");
    }
}