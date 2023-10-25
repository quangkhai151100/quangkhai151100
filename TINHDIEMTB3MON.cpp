#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
     {
     	float a,b,c,dtb;
     	printf("\n Nhap Diem Mon Toan:");
     	scanf("%f",&a);
     	printf("\n Nhap Diem Mon Ly:");
     	scanf("%f",&b);
     	printf("\n Nhap Diem Mon Hoa:");
     	scanf("%f",&c);
     	dtb=((a+b+c)/3);
     	printf("\n ======================="); 
     	printf("\n Diem Trung Binh Cua 3 Mon Ban Can Tim La %.1f", dtb);
     	if (dtb>=9)
     	{
     		printf("\n Ban La HOC SINH XUAT SAC");
        }
     	else if(dtb>=8)
     	{
     		printf("\n Ban La HOC SINH GIOI");     		
     	}
     	else if (dtb>=6.5)
     	{
     		printf("\n Ban La HOC SINH TIEN TIEN");     		
     	}
     	else if (dtb>=5)
     	{
     		printf("\n Ban La HOC SINH TRUNG BINH");     		
     	}
	else if (dtb<5)
	{	
	        printf("\n Ban CHUA DAT");
	}
	else if (dtd<3.5)
	{
		printf("\n Ban Con Kem Chua Dat");
	}     
	
     }	
     	
     	
