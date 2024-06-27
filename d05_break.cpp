#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");

    int n;
    while (1 == 1)
    {
        printf(">> nhap so nguyen n [1-20]: ");
        scanf("%d", &n);
        if (n >= 1 && n <= 20)
        {
            break; // ket thuc vong lap
        }
        printf(" >> Loi: gia tri nhap ko hop le, vui long nhap lai !\n");
    }

    double r = 1;
    for (int i = 1; i <= n; i++)
    {
        r *= i;
    }
    printf(" >> %d! = %.0f \n", n, r);
}