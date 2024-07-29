#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");
    // chuong trinh in tich cua N-so nguyen dau tien - giai thua N
    int n;
    double total = 1;
    printf(" >> nhap so nguyen N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d*", i); // in ra 1*2*3*4...
        total *= i;
    }

    printf("\b = %.0f \n", total);
}