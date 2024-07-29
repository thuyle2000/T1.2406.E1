#include <stdio.h>
#include <stdlib.h>
/* Write a program to print the series 100, 95 , 90, 85,………., 5*/
int main()
{
    system("cls");
    for (int i = 100; i >= 5; i -= 5)
    {
        printf("%d,", i);
    }
    printf("\b \n\n");
}