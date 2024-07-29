#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

void q1();
void q2();
int main()
{

    int op;
    // setup menu chuong trinh
    while (1 == 1)
    {
        system("cls");
        puts("**************************************************");
        puts("* Selecting appropriate action:                  *");
        puts("* 1. Task 1                                      *");
        puts("* 2. Task 2                                      *");
        puts("* 3. Quit program                                *");
        puts("**************************************************");
        printf(" Plz input your choice [1-3]: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            q1();
            break;
        case 2:
            q2();
            break;
        case 3:
            return 0; // ket thuc chuong trinh.
        default:
            printf(" >> wrong choice. Plz re-try ! \n");
            break;
        }

        printf("\n\n >>> press any key to continue ... ");
        getch();
    }
}
/*
Write a function, allows the user to input a positive integer number -
after that check this number whelther is the amstrong number or not .
ex: 153, 370, 371, 407, 1634, 8208, 9474,54748, 92727
*/
void q1()
{
    system("cls");

    fseek(stdin, 0, 0);
    int number, sum = 0, n = 0;
    while (1 == 1)
    {
        printf(" >> vui long nhap so nguyen duong > 0: ");
        scanf("%d", &number);
        if (number > 0)
            break;
    }

    // dem so luong chu so trong [number], dat vo bien [n]
    n = 0;
    int temp = number;
    while (temp > 0)
    {
        temp = temp / 10;
        n++;
    }

    // tinh tong luy thua (n) cua tung chu so
    int digit = 0;
    temp = number;
    for (int i = 0; i < n; i++)
    {
        digit = temp % 10;
        temp = temp /10;
        sum += (int)pow(digit, n); // = digit^n
    }

    if (sum == number)
    {
        printf(" >> %d la so amstrong !\n", number);
    }
    else
    {
        printf(" >> %d KHONG PHAI LA so amstrong !\n", number);
    }
}

struct DOCTOR
{
    char id[11], name[31], specialist[31];
    int exp_years;
};
typedef struct DOCTOR StrDOC;

void q2()
{
}