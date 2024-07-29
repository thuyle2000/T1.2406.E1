#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");
    int n = 1234, m = 45678;
    printf("%d, %d\n", n, m);
    printf("%20d, %d \n", n, m);
    printf("%-20d, %d\n", n, m);
    printf("%020d, %d\n", n, m);

    printf("%6.2f \n", 3.141516);
    printf("%06.2f \n", 3.141516);
}
