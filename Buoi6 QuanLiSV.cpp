#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>


struct sinhvien
     {
     	char MSSV[10];
     	char HoVaTen[30];
     	char GioiTinh[5];
     	int NamSinh[5];
     	char NganhHoc[30];
     	float KetQuaCuoiKhoa;
		char XepLoai[20];
		char QueQuan[20]; 
     };
typedef struct SinhVien SINHVIEN;
void TIMSV(SINHVIEN a[], int n);
void INGX(SINHVIEN a[], int n);
void SapXep(SINHVIEN a[], int n);
void Nhapsv(SINHVIEN &x);
void NhapsvN(SINHVIEN a[], int n);
void Xuatsv(SINHVIEN);
void XuatsvN(SINHVIEN a[], int n);

int main()
     {
     	int n, key;
     	SINHVIEN x, a[10];
     	while(true)
     	{
     		system("cls");
     		printf("\n.--------------------------------------------------------.");
     		printf("\n.            CHUONG TRINH QUAN LY SINH VIEN.");
     		printf("\n.         1.Nhap Danh Sach Sinh Vien.");
     		printf("\n.         2.In Danh Sach Sinh Vien.");
     		printf("\n.         3.Sap Xep Theo Ket Qua Cuoi Khoa.");
     		printf("\n.         4.In Sinh Vien Gioi, Xuat Sac.");
     		printf("\n.         5.Tim Kiem Sinh Vien Theo MSSV.");
     		printf("\n.         0.Thoat(EXIT).");
     	    printf("\n.--------------------------------------------------------.");
     	    printf("\n \t\t Bam Phim Chon: ");
     	    scanf("%d",&key);
     	    switch(key)
     	    {
     	    	case 1:
     	    		do{
     	    			printf("\n Nhap So Luong Sinh Vien: "); 
     	    			scanf("%d",&n);
     	    		  }while( n<=0 );
     	    		  NhapsvN(a,n);
     	    		  printf("\n Bam Phim Bat Ki De Tiep Tuc!");
     	    		  getch();
     	    		  break;
     	    	case 2:
				     XuatsvN(a, n);
					 printf("\n Bam Phim Bat Ki De Tiep Tuc!");
					 getch();
					 break;
				case 3:	 	  
     	    		  
     	    	    
     	    			
					     
					 
					 
     	    }

     		
     	}
     	
     }
 
     	


