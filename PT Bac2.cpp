#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a, b, c, denlta;
	printf("Nhap A:");
	scanf("%d",&a);
	printf("Nhap B:");
	scanf("%d",&b);
	printf("Nhap C:");
	scanf("%d",&c);
	
	denlta=b*b-4*a*c;
	
	if (a==0)
	{
		printf("\n Ban Phai Nhap A>0");
//		return 0;
	}
	if (denlta<0)
	{
	    printf("\n Phuong Trinh Sai(Khong Co Ket Qua)");
//		return 0;
	}
	if (denlta==0)
	{
	    float x=-b/(2*a);
		printf("\n Ket Qua La:%.2f",x);
	}
	if (denlta>0)
	{
	    float x1=-b - sqrt(denlta)/(2*a);
		float x2=-b + sqrt(denlta)/(2*a);
		printf("\n Nghiem Thu Nhat x1=%.2f",x1);
		printf("\n Nghiem Thu Hai x2=%.2f",x2);
	}
	}				
	
		 
