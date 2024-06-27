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

    int min, max, total;
    total = 0;
    min = max = a[0];

    printf("\n >> day so vua nhap: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", a[i]);

        min = a[i] > min ? min : a[i];
        max = a[i] < max ? max : a[i];
        total += a[i];
    }

    printf("\n >> so nho nhat : %d ", min);
    printf("\n >> so lon nhat : %d ", max);
    printf("\n >> gia tri bq  : %.2f \n", total / n);
}