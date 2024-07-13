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
        gets(ds[i].id);
        // fgets(ds[i].id,10,stdin);
        
        printf(" -ho ten: "); 
        gets(ds[i].name);
        // fgets(ds[i].name,30,stdin);

        fseek(stdin, 0,0);
        printf(" -gioi tinh [M/F]: "); scanf("%c", &ds[i].gender);
        printf(" -nam sinh: "); scanf("%d", &ds[i].yob);
    }
    
    printf("\n Danh sach sinh vien \n");
    printf(" ******************* \n");
    for (int i = 0; i < n; i++)
    {
        printf(" %s, %s, %c, %d \n", ds[i].id, ds[i].name, ds[i].gender, ds[i].yob);
    }
    
    //tim kiem sinh vien theo ten: 
    // user nhap ten sv muon tim, neu ct tim thay => in ra tt chi tiet cua ban
    // sv do, ngc lai thong bao ko tim thay.

    char search[31], yesno;
    int cnt;
    while (1==1)
    {
        cnt = 0;
        fseek(stdin,0,0);

        printf(" >> nhap ten cua sinh vien muon tim: ");        
        gets(search);

        for (int i = 0; i <n; i++)
        {
            if(strstr(ds[i].name, search)!=NULL){
                printf("\t thong tin chi tiet: \n");
                printf("\t\t id: %s, ho ten: %s, nam sinh:%d \n", ds[i].id, ds[i].name, ds[i].yob);
                cnt++;
            }
        }

        if(cnt==0){
            printf(" >> ko tim thay !!! \n");
        }

        printf("\n\t >> tiep tuc tim kiem ? (y) : ");
        scanf("%c",&yesno);
        if(yesno!='y' && yesno !='Y') break;
    }

}