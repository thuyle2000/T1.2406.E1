#include <stdio.h>
#include <stdlib.h>

int fnAdd(int a, int b); //khai bao cu phap (prototype) cua ham fnAdd()

int main(){
    system("cls");
    int n1, n2;
    printf("nhap so nguyen thu 1: "); scanf("%d", &n1);
    printf("nhap so nguyen thu 2: "); scanf("%d", &n2);

    int sum = fnAdd(n1, n2);
    printf(">> Tong cua 2 so %d va %d : %d \n", n1, n2, sum);
}

//Viet ham cong 2 so a, b. Tra ve tong cua 2 so do.
int fnAdd(int a, int b){
    int sum = a+b;
    return sum;
}