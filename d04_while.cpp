#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");
    int n = -1;

    while (n < 2 || n > 10)
    {
        printf(" >> nhap so nguyen n [2-10]: ");
        scanf("%d", &n);
    }
    printf("\n Bang cuu chuong %d \n", n);
    for (int i = 1; i <= 10; i++)
    {
        printf(" %2d *%2d = %3d \n", n, i, n * i);
    }
}