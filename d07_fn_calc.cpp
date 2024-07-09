#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fnCalc(int a, int b, char op); // khai bao cu phap (prototype) cua ham fnCalc()

int main()
{
    system("cls");
    int n1, n2;

    printf("nhap so nguyen thu 1: ");
    scanf("%d", &n1);
    printf("nhap so nguyen thu 2: ");
    scanf("%d", &n2);

    char op;
    char ops[] = "+-*/%";

    while (1 == 1)
    {
        fseek(stdin, 0, 0);
        printf(">> nhap phep toan [+ - * / %%]: ");
        scanf("%c", &op);
        if (strchr(ops, op) != NULL)
        {
            break;
        }
    }

    int result = fnCalc(n1, n2, op);
    printf(">> %d %c %d = %d \n", n1, op, n2, result);
}

// Viet ham thuc hien phep tinh +=*/% tren 2 so a, b. Tra ve kq cua phep toan
int fnCalc(int a, int b, char op) {
    int r;
    switch (op) {
    case '+':
        r = a + b;
        break;
    case '-':
        r = a - b;
        break;
    case '*':
        r = a * b;
        break;
    case '/':
        r = a / b;
        break;
    default:
        r = a % b;
        break;
    }
    op = 'x';
    return r;
}