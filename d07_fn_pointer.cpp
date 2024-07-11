#include <stdio.h>
#include <stdlib.h>
int fnSub(int, int);
int fnAdd(int, int);
int main()
{
    system("cls");
    int x = 27, y = 8;
    printf("%d + %d = %d \n", x, y, fnAdd(x, y));
    printf("%d - %d = %d \n", x, y, fnSub(x, y));

    printf("\n\n >> Demo Con tro ham \n");
    int (*f)(int, int); // khai bao con tro ham *f;
    f = fnAdd;
    printf("%d + %d = %d \n", x, y, f(x, y));
    f = fnSub;
    printf("%d - %d = %d \n", x, y, f(x, y));
}

int fnSub(int a, int b)
{
    return (a - b);
}

int fnAdd(int a, int b)
{
    return (a + b);
}