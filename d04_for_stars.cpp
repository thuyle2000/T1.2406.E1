#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");
    int n;
    printf(" >> nhap so dong : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}