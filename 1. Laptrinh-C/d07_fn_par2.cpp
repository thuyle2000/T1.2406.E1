#include <stdio.h>
#include <stdlib.h>

//demo function: call by ref
void swap(int *a, int *b);
int main(){
    system("cls");

    int n1, n2;
    printf(">> nhap so nguyen n1: "); scanf("%d", &n1);
    printf(">> nhap so nguyen n2: "); scanf("%d", &n2);
    printf(" >> truoc khi goi ham swap(): n1=%d, n2=%d \n", n1, n2);
    swap(&n1,&n2);
    printf(" >> sau khi goi ham swap()  : n1=%d, n2=%d \n", n1, n2);
}

//ham chuyen doi gia tri cua 2 tham so a, b
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
    printf("\n ** trong ham swap(), a=%d, b=%d** \n\n",*a,*b);
}