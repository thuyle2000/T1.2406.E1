#include <stdio.h>
#include <stdlib.h>
/* quan ly danh sach cac doi tuong sinh vien.
   moi sinh vien duoc lap trinh duoi dang struct STUDENT, bao gom: ma so, ho ten, gioi tinh, nam sinh */

// dinh nghia cau truc du lieu sinh vien [struct STUDENT]
struct STUDENT
{
    char id[11], name[31];
    char gender;
    int yob;
};

int main()
{
    system("cls");
    int n;

    while(1==1){
        printf(" >> nhap tong so sinh vien [3-10]: ");
        scanf("%d", &n);
        if(n>=3 && n<=10) break;
    }

    //khai bao mang [ds] chua n-sinh vien
    struct STUDENT ds[n];

    //vong lap nhap du lieu cua n-sinh vien
    for (int i = 0; i <n ; i++)
    {
        fseek(stdin,0,0);
        printf("\n >> nhap thong tin sv thu %d: \n", i+1);
        printf(" -id: "); gets(ds[i].id);
        printf(" -ho ten: "); gets(ds[i].name);
        printf(" -gioi tinh [M/F]: "); scanf("%c", &ds[i].gender);
        printf(" -nam sinh: "); scanf("%d", &ds[i].yob);
    }
    

    printf("\n Danh sach sinh vien \n");
    printf(" ******************* \n");
    for (int i = 0; i < n; i++)
    {
        printf(" %s, %s, %c, %d \n", ds[i].id, ds[i].name, ds[i].gender, ds[i].yob);
    }
    
}