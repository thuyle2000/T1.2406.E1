#include <stdio.h>
#include <stdlib.h>

int fnSub(int a, int b); //khai bao cu phap (prototype) cua ham fnSub()

int main(){
    system("cls");
    int n1, n2;
    printf("nhap so nguyen thu 1: "); scanf("%d", &n1);
    printf("nhap so nguyen thu 2: "); scanf("%d", &n2);

    int sum = fnSub(n1, n2);
    printf(">> Hieu cua 2 so %d va %d : %d \n", n1, n2, sum);
}

//Viet ham tru 2 so a, b. Tra ve hieu cua 2 so do.
int fnSub(int a, int b){
    return (a-b) ;  
}