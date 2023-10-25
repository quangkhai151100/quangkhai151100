#include<stdio.h>
#include<conio.h>
#include<math.h>
void tinhtiendien();
int main()
{
     tinhtiendien();
	 return 0;
}
void tinhtiendien()
{     
     int a,x,y,z,m,tiendien,td;
	 printf("\n Nhap So Kwh:");
	 scanf("%d",&a);
	 if  (a<=100)
	 {
	 	tiendien=a*455;
	 	printf("\n Vi Kwh Duoi 100 Nen Gia La: 455 VND/Kwh");
	 	printf("\n So Tien Dien Ban Phai Tra La:%d",tiendien);
	 }	
	 else if  (101<=a  &&  a<=150)
	 {
	 	printf("\n Vi Kwh Tren 101 Va Duoi 150 Nen Gia La: 591 VND/Kwh");
	 	tiendien=a*591;
	 	printf("\n So Tien Dien Ban Phai Tra La:%d",tiendien);
     }
	 if  (151<=a  &&  a<=200)
	 {
	    
	    printf("\n Vi Kwh Tren 151 Va Duoi 200 Nen Gia La: 818 VND/Kwh");
	    tiendien=a*818;
	    printf("\n So Tien Dien Ban Phai Tra La:%d",tiendien);
	 }
	 else if  (a>=201)
	 {
	 	printf("\n Vi Kwh Tren 201 Nen Gia La: 1000 VND/Kwh");
	 	tiendien=a*1000;
	 	printf("\n So Tien Dien Ban Phai Tra La:%d",tiendien);
	 }	
}	    
