#include <stdio.h>
#include <stdlib.h>
/* Write a C program that accepts a number and square the number with the help of a function */
long square(int x);
int main(){
    int n ;
    printf(">> nhap 1 so bat ky: ");
    scanf("%d", &n);
    printf("%d = %d \n", n, square(n));

}

long square(int x){
    return x*x;
}