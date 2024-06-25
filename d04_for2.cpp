#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");
    for (int i = 1, j = 9; i < 10; i++, j--)
    {
        printf(" %2d + %2d = %2d \n", i, j, i + j);
    }
}