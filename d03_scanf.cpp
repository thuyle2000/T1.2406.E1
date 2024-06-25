#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");
    int a;
    float r;
    char c;
    char names[41];

    printf("nhap so nguyen : ");
    scanf("%d", &a);
    printf("nhap so thuc : ");
    scanf("%f", &r);
    fseek(stdin, 0, 0);

    printf("nhap 1 ky tu : ");
    scanf("%c", &c);

    printf("nhap 1 chuoi : ");
    fseek(stdin, 0, 0);
    // scanf("%[^\n]", names);
    gets(names);

    printf("a=%d, r=%.2f, c=%c, names=%s\n", a, r, c, names);
}