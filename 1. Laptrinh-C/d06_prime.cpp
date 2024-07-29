#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    system("cls");

    int n;
    while (1 == 1)
    {
        printf(" >> vui long nhap so nguyen n [>=2]: ");
        scanf("%d", &n);
        if (n >= 2)
            break;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            // i la uoc so cua n => n la hop so
            printf(" >> %d la hop so !\n", n);
            return 0; // ket thuc chuong trinh
        }
    }

    printf(" >> %d la so nguyen to !\n", n);
}