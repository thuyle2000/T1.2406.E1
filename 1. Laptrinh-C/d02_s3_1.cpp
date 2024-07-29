#include <stdio.h>
#include <stdlib.h>
int main()
{
    float r;
    float pi = 3.1415;
    printf("nhap ban kinh r: ");
    scanf("%f", &r);

    printf(" >> chu vi : %f \n", 2 * pi * r);
    printf(" >> dien tich  : %f \n", pi * r * r);
}