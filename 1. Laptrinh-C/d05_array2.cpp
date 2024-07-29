#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");

    int n;
    while (1 == 1)
    {
        printf(" nhap so phan tu cua mang [4-10]: ");
        scanf("%d", &n);
        if (n >= 4 && n <= 10)
            break;
    }

    int a[n]; // khai bao mang so nguyen a[] gom n-phan tu

    // vong lap nhap du lieu cho mang a[]
    for (int i = 0; i < n; i++)
    {
        printf(" >> nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("\n >> day so vua nhap: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", a[i]);
    }

    int cnt = 0;
    printf("\n >> cac so chan: ");
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d, ", a[i]);
            cnt++;
        }
    }
}