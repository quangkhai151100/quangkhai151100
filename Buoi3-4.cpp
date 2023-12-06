#include<stdio.h>
#include<conio.h>
void nhapmang2c(int a[50][50],int m, int n);
void xuatmang2c(int a[50][50],int m, int n);
void maxmin(int a[50][50], int m, int n);
void tongmatran(int a[50][50], int m, int n);
void timkiemvitri(int a[50][50], int m, int n);




int main()
{
	int m,n,a[50][50];
//	int tong=0;
	printf("\n Nhap So Dong:");
	scanf("%d",&m);
	printf("\n Nhap So Cot:");
	scanf("%d",&n);

	
	nhapmang2c(a,m,n);
	xuatmang2c(a,m,n);
	maxmin(a,m,n);
	tongmatran(a,m,n);
	timkiemvitri(a,m,n);

	
}
void nhapmang2c(int a[50][50],int m, int n)
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
void xuatmang2c(int a[50][50],int m, int n)
{
	for(int i=0;i<m;i++)
	{
	
	for(int j=0;j<n;j++)
	     
	     	printf("\t %d",a[i][j]);
	     	printf("\n");
	     
    }
}
void maxmin(int a[50][50], int m, int n)
{
	int max=a[0][0];
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	     {
	     	if(a[i][j]>max)
            max=a[i][j];
			else max=max;
	     }
     printf("\n Gia Tri Lon Nhat Trong Mang La:%d",max);
     

	int min=a[0][0];
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	     {
	     	if(a[i][j]<min)
	     	min=a[i][j];
	     	else min=min;
	     	
	     }
	printf("\n Gia Tri Nho Nhat Trong Mang La:%d",min);     
}
void tongmatran(int a[50][50], int m, int n)
{
	int tong=0;
	for(int i=0;i<m;i++)
	{
	for(int j=0;j<n;j++)
         {
         	tong=tong+a[i][j];
         }
    }
	printf("\n Tong Cua Ma Tran Tren La:%d",tong);
	
}
void timkiemvitri(int a[50][50], int m, int n)
{
     int x;
	 printf("\n Nhap Gia Tri X Ban Can Tim:");
	 scanf("%d",&x);
	 for(int i=0;i<m;i++)
	 for(int j=0;j<n;j++)
     {
	      if(a[i][j]==x)
		  {
		   printf("\n Vi Tri Cua X Trong Mang La Phan Tu a[%d][%d]",i,j);
		  }
	 }
}	


