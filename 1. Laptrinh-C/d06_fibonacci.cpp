#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int n;
    while (1 == 1)
    {
        printf(" >> vui long nhap so phan tu [3-20]:");
        scanf("%d", &n);
        if (n >= 3 && n <= 20)
            break;
    }
    int a, b, c;
    a = b = 1;

    printf("%d, %d, ", a, b);
    for (int i = 2; i < n; i++)
    {
        c = b + a;
        printf("%d, ", c);
        a = b;
        b = c;
    }
}