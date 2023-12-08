#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void nhapmang(int a[50][50], int m, int n);
void xuatmang(int a[50][50], int m, int n);
void sapxepmang(int a[50][50], int m, int n);
void tinhtongsnt(int a[50][50], int m, int n);




int main()
     {
     	int a[50][50], m, n, key;
     	while(true)
     {
	    system("cls");
		printf("\n.------------------CHUONG TRINH MANH HAI CHIEU.-------------------------");	
		printf("\n.             1.Nhap/Xuat Mang 2 Chieu                                 .");	
		printf("\n.             2.Sap Xep Mang Theo Thu Tu Tang Dan                      .");	
		printf("\n.             3.Tinh Tong Cac Phan Tu La So Nguyen Chia Het Cho 3      .");	
		printf("\n.             0.Thoat Chuong Trinh                                     .");	
		printf("\n.---------------------------------------------------------------------- ");
		fflush(stdin);
		printf("\n \t\t Nhan Phim Chon:  ");
		scanf("%d",&key);
		switch(key)
		{
		   case 1:
		   printf("\n Nhap So Dong:");
           scanf("%d",&m);
           printf("\n Nhap So Cot:");
           scanf("%d",&n);
		   fflush(stdin);
		   nhapmang(a,m,n);
		   xuatmang(a,m,n);		   
		   printf("\n Bam Phim Bat Ki De Tiep Tuc:");
		   getch();
		   break;
		   
		   case 2:  
		   sapxepmang(a,m,n);
		   printf("\n Mang Theo Thu Tu Tang Dan La:");
		   xuatmang(a,m,n);
		   fflush(stdin);
		   printf("\n Bam Phim Bat Ki De Tiep Tuc:");
		   getch();
		   break;
		   
		   case 3:
		   fflush(stdin);
		   printf("\n Bam Phim Bat Ki De Tiep Tuc:");
		   getch();
		   break;
		   
		   case 0:
		   exit(1);
		   
		   default:
		   printf("\n Chuong Trinh Khong Co Chuc Nang Nay!");
		   printf("\n Bam Phim Khac De Tiep Tuc!");
		   getch();
		   break;
		   	
	 }
   	}
} 
void nhapmang(int a[50][50], int m, int n)
     {
     	for(int i=0;i<m;i++)
     	{
     	for(int j=0;j<n;j++)
     	     {
     	     	printf("\n Nhap Phan Tu:[%d][%d]",i,j);
     	     	scanf("%d",&a[i][j]);
     	     }
        } 
	 }
void xuatmang(int a[50][50], int m, int n)
     {
     	for(int i=0;i<m;i++)
     	{
     	for(int j=0;j<n;j++)
             	printf("\t %d ", a[i][j]);
             	printf("\n ");
        }	
	 }	 	  
void sapxepmang(int a[50][50], int m, int n)
{
     int k=n*m, tam;
     for(int i=0;i<k;i++)
     {
     for(int j=i+1;j<k;j++)
	 if(a[i/m][i%m] > a[j/m][j%m])
	 {
	     tam=a[i/m][i%m];
		 a[i/m][i%m]=a[j/m][j%m];
		 a[j/m][j%m]=tam;
	 }	 				
     	
   }
}
void tinhtongsnt(int a[50][50], int m, int n)



