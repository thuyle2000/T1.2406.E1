#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    system("cls");
    char names[81], s[81];

    printf(">> nhap ho ten: ");
    gets(names);

    printf(">> nhap chuoi ky tu bat ky: ");
    gets(s);

    printf(" .> ho ten co [%d] ky tu \n", strlen(names));
    printf(" .> [%s] vs [%s] = [%d]\n", names, s, strcmp(names, s));
    printf(" .> [%s] co trong [%s] ? [%d] \n", s, names, strstr(names, s));
}