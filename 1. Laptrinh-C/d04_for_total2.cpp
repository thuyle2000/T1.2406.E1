#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");
    // chuong trinh in tong cua N-so nguyen dau tien - ver 2.0
    int n, total = 0;
    printf(" >> nhap so nguyen N: ");
    scanf("%d", &n);

    for (int i = n; i > 0; i--)
    {
        printf(" %d +", i); // in ra 1+2+3+4...
        total += i;
    }

    printf("\b = %d \n", total);
}