#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    system("cls");
    char s[81]; // khai bao chuoi s co the chua toi da 80 ky tu

    printf(" >> nhap chuoi bat ky: ");
    gets(s);

    char vowels[] = "AaEeIiOoUu"; // khai bao chuoi cac nguyen am

    int n = strlen(s); // dem so ky tu trong chuoi s -> n
    int cnt = 0;       // bien cnt chua tong so nguyen am.

    // vong lap kiem tra tung ky tu trong chuoi s co phai la na ?
    for (int i = 0; i < n; i++)
    {
        if (strchr(vowels, s[i]) != NULL)
        {
            cnt++;
        }
    }

    printf("\n >> co [%d] nguyen am trong chuoi [%s]\n", cnt, s);
}