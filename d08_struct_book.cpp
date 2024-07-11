#include <stdio.h>
#include <stdlib.h>
/* dinh nghia cau truc du lieu ten [Book], gom cac thuoc tinh:
    -ma so [id] : chuoi ky tu (10)
    -tua [title]: chuoi ky tu (30)
    -tac gia [author]: chuoi ky tu (30)
    -nam xuat ban: so nguyen
    -don gia: so thuc
*/
struct BOOK
{
    char id[11], title[31], author[31];
    int year;
    float price;
};

void print(struct BOOK b);
int main()
{
    system("cls");

    // khai bao bien b1 kieu [struct BOOK], va khoi tao gia tri
    struct BOOK b1 = {"B01", "Lap trinh C", "Aptech", 1999, 89.99};
    print(b1);

    struct BOOK b2;
    
    printf("\n>> nhap thong tin sach: \n");
    printf(" -id: ");    gets(b2.id);
    printf(" -tua: ");    gets(b2.title);
    printf(" -tac gia: ");    gets(b2.author);
    printf(" -nam xb: ");   scanf("%d", &b2.year);
    printf(" -don gia: ");    scanf("%f", &b2.price);
    print(b2);
}

// ham in noi dung cua bien b co kieu [struct BOOK]
void print(struct BOOK b)
{
    printf(">> thong tinh chi tiet : \n");
    printf("   id=[%s], tua=[%s], tac gia=[%s], nam xb=[%d], don gia=[%.2f]\n", b.id, b.title, b.author, b.year, b.price);
}