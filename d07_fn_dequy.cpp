#include <stdio.h>
#include <stdlib.h>
//demo ham de quy (ham tu goi lai chinh no)
double fn_factorial(int n);
int main(){
    system("cls");
    int n;

    while (1==1)
    {
        printf(">> nhap so nguyen n [0-20]: ");
        scanf("%d", &n);
        if(n>=0 && n<=20){
            break;
        }
    }

    double r = fn_factorial(n);
    printf("\n >> %d! = %.0f \n", n, r);
}


//ham de quy tinh n! = (n-1)! * n, voi 0! = 1! = 1
double fn_factorial(int n){
    if(n < 2){
        return 1;
    }
    return fn_factorial(n-1)*n;
}