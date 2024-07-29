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
        if (n < 1 || n > 20)
        {
            printf(" >> Loi: gia tri nhap ko hop le, vui long nhap lai !\n");
            continue;
        }
        // ket thuc vong lap
        break;
    }

    double r = 1;
    for (int i = 1; i <= n; i++)
    {
        r *= i;
    }
    printf(" >> %d! = %.0f \n", n, r);
}