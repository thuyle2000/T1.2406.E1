#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");
    int m;
    printf("nhap diem ket qua thi [0-100]: ");
    scanf("%d", &m);
    if (m < 0 || m > 100)
    {
        printf(" >> Loi: du lieu ko hop le !");
    }
    else if (m > 80)
    {
        printf(" >> Xep loai A \n");
    }
    else if (m > 70)
    {
        printf(" >> Xep loai B \n");
    }
    else if (m >= 50)
    {
        printf(" >> Xep loai C \n");
    }
    else
    {
        printf(" >> Ko dat yeu cau ! \n");
    }
}