#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");
    char kt;
    printf(">> nhap 1 ky tu bat ky: ");
    scanf("%c", &kt);
    if ((kt >= 'a' && kt <= 'z') || (kt >= 'A' && kt <= 'Z'))
    {
        switch (kt)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf(" >> ky tu [%c] la nguyen am !\n", kt);
            break;
        default:
            printf(" >> ky tu [%c] la phu am !\n", kt);
            break;
        }
    }
    else if (kt >= '0' && kt <= '9')
    {
        printf(" >> ky tu [%c] la ky so !\n", kt);
    }
    else
    {
        printf(" >> ky tu [%c] la ky tu dac biet !\n", kt);
    }
}