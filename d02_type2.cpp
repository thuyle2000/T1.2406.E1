#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    float f;
    double d;
    char c;
    char names[80];

    system("cls");
    // doan code cho nhap gia tri vo cac bien i,f,d,c,names.
    printf("Nhap so nguyen i = ");
    scanf("%d", &i);
    printf("Nhap so thuc f = ");
    scanf("%f", &f);
    printf("Nhap so thuc d = ");
    fseek(stdin, 0, 0);
    scanf("%lf", &d);
    fseek(stdin, 0, 0);
    printf("Nhap ky tu c = ");
    scanf("%c", &c);
    printf("Nhap chuoi names = ");
    scanf("%s", &names);

    // doan code in ra cac gia tri vua nhap
    printf("int i = %d \n", i);
    printf("float f = %f \n", f);
    printf("double d = %lf \n", d);
    printf("character c = %c \n", c);
    printf("string names = %s \n", names);
}