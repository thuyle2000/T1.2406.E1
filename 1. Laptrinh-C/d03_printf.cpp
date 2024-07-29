#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");
    int n;
    float r;
    printf("nhap so nguyen n: ");
    scanf("%d", &n);
    printf("nhap so thuc r: ");
    scanf("%f", &r);
    printf(" >> n = %d(d), %o(o), %x(x) , %u(u)\n", n, n, n, n);
    printf(" >> r = %f(f), %g(g), %e(e) \n", r, r, r);
}