#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");

    int a = 10;
    int b = 10;

    int c = a++; // a=a+1;
    int d = ++b;

    printf(" >> a= %d, c=%d, b=%d, d=%d \n", a, c, b, d);
}