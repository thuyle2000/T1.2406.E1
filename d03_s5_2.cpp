#include <stdio.h>
#include <stdlib.h>
int main()
{
    // chuong trinh qui doi don vi tinh tu:
    // cm -> inch (2.54cm = 1 inch), vd 333.33 cm = 10.9 feet
    // cm -> foot (12inches = 1 foot),  333.33 cm = 131.2 inches
    system("cls");
    float cm;
    float inch, foot;
    printf("Nhap cm: ");
    scanf("%f", &cm);
    inch = cm / 2.54;
    foot = inch / 12;
    printf("%.2f cm = %.1f inches, %.1f feet", cm, inch, foot);
}