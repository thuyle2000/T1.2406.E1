#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("cls");
    int n;
    while (1 == 1)
    {
        printf(">> nhap so sv [3-10]: ");
        scanf("%d", &n);
        if (n >= 3 && n <= 10)
            break;
        fseek(stdin, 0, 0);
    }

    char hoten[n][31]; // khai bao mang hoten[] gom co n dong, moi dong 30 ky tu.

    // vong lap nhap ho ten cua n-sinh vien
    for (int i = 0; i < n; i++)
    {
        fseek(stdin, 0, 0);
        printf(" nhap ho ten cua sv thu %d: ", i + 1);
        gets(hoten[i]);
    }

    // in bang ds ho ten cua n-sinh vien ra man hinh
    printf("\n Danh sach ho ten sinh vien \n");
    for (int i = 0; i < n; i++)
    {
        printf(" %2d. %s \n", i + 1, hoten[i]);
    }

    char temp[31];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (strcmp(hoten[j], hoten[j - 1]) < 0)
            {
                strcpy(temp, hoten[j]);
                strcpy(hoten[j], hoten[j - 1]);
                strcpy(hoten[j - 1], temp);
            }
        }
    }

    // in bang ds ho ten cua n-sinh vien sau khi xep thu tu
    printf("\n Danh sach ho ten sinh vien [A-Z]\n");
    for (int i = 0; i < n; i++)
    {
        printf(" %2d. %s \n", i + 1, hoten[i]);
    }
}