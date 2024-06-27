#include <stdio.h>
#include <stdlib.h>

// Accept two numbers num1 and num2. Find the sum of all odd numbers between the two numbers entered.

int main()
{
    system("cls");
    int n1, n2;
    printf(" nhap so thu 1: ");
    scanf("%d", &n1);

    while (1 == 1)
    {
        printf(" nhap so thu 2 (>%d): ", n1);
        scanf("%d", &n2);
        if (n2 > n1)
            break;
    }

    int total = 0;
    int i = n1 % 2 == 0 ? n1 + 1 : n1;
    for (; i <= n2; i += 2)
    {
        printf(" %d +", i);
        total += i;
    }
    printf("\b = %d\n", total);
}