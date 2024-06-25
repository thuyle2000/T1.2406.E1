#include <stdio.h>
#include <stdlib.h>
int main()
{
    // chuong trinh tinh dt va cv hinh chu nhat
    system("cls");
    float l, w;
    printf("Nhap chieu dai hcn:");
    scanf("%f", &l);
    printf("Nhap chieu rong hcn:");
    scanf("%f", &w);
    printf("Chu vi hcn: %f\n", (l + w) * 2);
    printf("Dien tich hcn: %f", l * w);
}