#include<stdio.h>
#include<conio.h>
#include<math.h>
//ham dung de kiem tra so nguyen to
bool KiemTraNguyenTo(int n)
{
    if (n < 2)//neu n < 2 thi khong phai so nguyen to
    {
        return false;
    }
    else if (n > 2)
    {
        if (n % 2 == 0) //neu la so chan khong phai so nguyen to
        {
            return false;
        }
        for (int i = 3; i <= sqrt((float)n); i += 2)  //kiem tra so le
        {
            if (n % i == 0)// neu chia het cho i thi khong phai so nguyen to
            {
                return false;
            }
        }
    }
    //nguoc lai la so nguyen to
    return true;
}
int main()
{
    // khai bao n
    int n;
    // khai bao mang mot chieu a co toi da 100 phan tu
    int a[100];
    // khai bao dem
    int dem=0;
    // nhap vo so phan tu cua mang
    do{
        printf("Nhap so phan tu mang:");
        scanf("%d", &n);
    }while(n<1 || n>100);
    
    //nhap vao cac phan tu cua mang
    for(int i=0; i< n; i++)
    {
        printf("Nhap a[%d] = ",i);
        scanf("%d", &a[i]);
    }
    printf("Mang sau khi nhap la:\n");
    //hien thi mang ra man hinh
    for(int i=0; i< n; i++)
    {
        printf("%d \t",a[i]);
    }
    //dem so nguyen to co trong mang
    for(int i = 0; i < n; i++)
    {
        if(KiemTraNguyenTo(a[i]) == true)// neu a[i] la so nguyen to dem tang len 1
        {
            dem++;
        }
    }
    //in dem tra man hinh
    printf("\nSo luong cac so nguyen to la: %d", dem);
    
}
