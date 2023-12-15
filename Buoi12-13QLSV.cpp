#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct
     {
     	char ma[10];
     	char hoten[40];
     }  SinhVien;
void WriteFile(char*FileName);
void ReadFile(char*FileName);
void Search(char*FileName);

int main()
     {
     	int c;
     	for(;;)
     	{
     		printf("\n.-----------------------------------------------.");
		    printf("\n.        1.Nhap Danh Sach Sinh Vien             .");
    		printf("\n.        2.In Danh Sach Sinh Vien               .");
     		printf("\n.        3.Tiem Kiem                            .");
     		printf("\n.        4.Thoat                                .");
     		printf("\n.-----------------------------------------------.");
     		printf("\n \t\t An Phim Chon:");
     		scanf("%d",&c);
     		fflush(stdin);
     		if(c==1)
     		{
     			WriteFile("SinhVien.txt");
     		}
     		else if(c==2)
     		{
     			ReadFile("SinhVien.txt");
     		}
     		else if(c==3)
     		{
     			Search("SinhVien.txt");
     		}
     		else break;
     	}
     	
     }   
void WriteFile(char*FileName)
     {
     	FILE*f;
     	int n,i;
     	SinhVien sv;
     	f=fopen(FileName,"ab");
     	printf("\n Nhap Vao So Luong Sinh Vien:");
     	scanf("%d",&n);
     	for(int i=1; i<=n; i++)
     	{
     		printf("\n Sinh Vien Thu %i",i);
     		fflush(stdin);
     		printf("\n Ma So Sinh Vien:");
     		gets(sv.ma);
     		printf("\n Ho Va Ten:");
     		gets(sv.hoten);
    		fwrite(&sv, sizeof(sv),1,f);    		    		
     	}
     	fclose(f);
     	printf("\n Bam Bat Ki De Tiep Tuc:");
     	getch();
     } 
void ReadFile(char*FileName)
     {
     	FILE*f;
     	SinhVien sv;
     	f=fopen(FileName,"rb");
     	printf("\n Ma So Sinh Vien | Ho Va Ten");
     	fread(&sv, sizeof(sv),1,f);
     	while (!feof(f))
     	{
     		printf("\n %s | %s ",sv.ma,sv.hoten);
     		fread(&sv, sizeof(sv),1,f);
     		
     	}
     	fclose(f);
     	printf("\n Bam Phim Bat Ki De Tiep Tuc!");
     	getch();
     	
     }
void Search(char*FileName)
     {
     	char MSSV[10];
     	FILE*f;
     	int Found=0;
     	SinhVien sv;
     	fflush(stdin);
     	printf("\n Nhap Ma So Sinh Vien Can Tim:");
     	gets(MSSV);
     	f=fopen(FileName,"rb");
     	while (!feof(f) && Found ==0 )
     	{
     		fread(&sv,sizeof(sv),1,f);
     		if(strcmp(sv.ma,MSSV)==0)
     		Found=1;
     	}
     	fclose(f);	
     	if (Found == 1)
     	{
     		printf("\n Tim Thay Sinh Vien Co Ma:%s",sv.ma,sv.hoten);
     		printf("\n Ho Va Ten La:%s",sv.hoten);
     	}
     	else
     	{
     		printf("\n Khong Tim Thay Sinh Vien Co Ma %s",MSSV);
     		
     	}
     	printf("\n Bam Phim Bat Ki De Tiep Tuc:");
     	getch();
     }	  
