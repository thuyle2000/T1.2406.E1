#include <stdio.h>
#include <stdlib.h>
int main()
{
    // chuong trinh tinh the tich hinh khoi tru
    system("cls");
    float h, r;
    printf("Nhap chieu cao hinh tru:");
    scanf("%f", &h);
    printf("Nhap ban kinh hinh tru:");
    scanf("%f", &r);
    printf("The tich khoi tru: %f", h * r * r * 3.14);
}