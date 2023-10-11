#include<stdio.h>
#include<math.h>
int main()
{
    //khai bao bien N
    int N;
    //khai bao bien gan
    int gan;
    //Khai bao bien tich = 1 
    long tich = 1;
    do
    {
        //Nhap vao du lieu cua N
        printf("\nNhap N: ");
        scanf("%d", &N);
    }while(N < 0 && printf("\nLoi: n >= 0 !"));//Neu N<0 yeu cau nhap lai
    // khai bao gan = N
    gan = N;
    while(gan != 0)//Neu biên gan con khac 0 thuc hien vong lap
    {
        tich = tich * (gan%10);//bien tich tang len gan%10 lan
        gan = gan / 10;//bien gan chia 10
    }
    //in bien tong ra man hinh
    printf("\nTich cac chu so cua %d la %ld",N, tich);
}
