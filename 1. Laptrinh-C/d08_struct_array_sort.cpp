#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* quan ly danh sach cac doi tuong sinh vien.
   moi sinh vien duoc lap trinh duoi dang struct STUDENT, bao gom: ma so, ho ten, gioi tinh, nam sinh 
   version : sort by name*/

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
        printf(" -id: "); 
        // gets(ds[i].id);
        fgets(ds[i].id,10,stdin);
        printf(" -ho ten: "); 
        // gets(ds[i].name);
        fgets(ds[i].name,10,stdin);
        puts(" -gioi tinh [M/F]: "); scanf("%c", &ds[i].gender);
        printf(" -nam sinh: "); scanf("%d", &ds[i].yob);
    }
    

    printf("\n Danh sach sinh vien \n");
    printf(" ******************* \n");
    for (int i = 0; i < n; i++)
    {
        printf(" %s, %s, %c, %d \n", ds[i].id, ds[i].name, ds[i].gender, ds[i].yob);
    }
    

    //sap xep lai ds theo ten sinh vien
    struct STUDENT temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = n-1; j > i; j--)
        {
            if(strcmp(ds[j].name, ds[j-1].name)<0){
                temp = ds[j];
                ds[j] = ds[j-1];
                ds[j-1] = temp;
            }
        }
    }
    

    printf("\n Danh sach sinh vien [xep thu tu theo ten] \n");
    printf(" ******************* \n");
    for (int i = 0; i < n; i++)
    {
        printf(" %s, %s, %c, %d \n", ds[i].id, ds[i].name, ds[i].gender, ds[i].yob);
    }
}