#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
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

        printf(" >>> press any key to continue ... ");
        getch();
    }
}

void q1()
{
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