#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int xoa(char s[50],int vitrixoa);
int xoakt(char s[50]);
int chuanhoa(char s[50]);
int demtu(char s[50]);
int demkt(char s[50]);
void ghep(char s[50], char s2[50]);
void chon1(char s[50]);


int main()
     {
     	char s[50],s2[50], key;
     	while(true)
     	{
     		system("cls");
     		printf("\n .--------------------------------------------------------.");
     		printf("\n .                THAO TAC TREN CHUOI.                    .");
     		printf("\n .             1.Nhap Va Chuan Hoa Chuoi.                 .");
     		printf("\n .             2.Dem So Tu Trong Chuoi.                   .");
     		printf("\n .             3.Ghep Chuoi.                              .");
     		printf("\n .             4.Kiem Tra Doi Xung.                       .");
     		printf("\n .             5.Dem Ky Tu.                               .");
     		printf("\n .             0.Thoat.                                   .");     	
     		printf("\n .--------------------------------------------------------.");
     		fflush(stdin);  // Xóa bo nho tam thoi de khong hien lai gia tri rac
     		printf("\n \t\t   AN PHIM CHON: ");
     		scanf("%d",&key);
     		switch(key)    // Tao ra CASE nhu ben duoi
     		{
     			case 1:
     				fflush(stdin);
     				chon1(s);
     				printf("\n Bam Phim Bat Ki De Tiep Tuc: ");
     				getch(); // Nhap ki tu vao ban phim
     				break;   // dung trong vong lap nao thi cham dut vong lap do
     			case 2:
				    fflush(stdin);
				    demtu(s);
				    printf("\n Bam Phim Bat Ki De Tiep Tuc: ");
				    getch();
				    break;
				case 3:
					fflush(stdin);
					demkt(s);
					printf("\n Bam Phim Bat Ki De Tiep Tuc: ");
					getch();
					break;
				case 4:
				    fflush(stdin);
					printf("\n Bam Phim Bat Ki De Tiep Tuc: ");
					break;
				case 5:
				    fflush(stdin);
					printf("\n Bam Phim Bat Ki De Tiep Tuc: ");
					getch();
					break;
				case 0:
				    exit(1);
				default:   // (mac dinh)    
				    printf("\n Khong Co Chuc Nang Nay!");
					printf("\n Bam Phim Khac De Tiep Tuc!");
					getch();
					break;
		    }
				
											
				
				 	
     					
	   	}
	 }
void chon1(char s[50])
     {
     	printf("\n Nhap Chuoi:");
     	gets(s);  // doc chuoi s1
     	chuanhoa(s);
     	printf("\n Chuoi Chuan Hoa:");
     	puts(s);   // tra ve gia tri
     }
int xoa(char s[90],int vitrixoa)
{
	int n=strlen(s);  // strlen dung de tinh do dai cua mot chuoi
    for(int i=vitrixoa;i<n;i++)
     s[i]=s[i+1];
	s[n-1]='\0'; 
}
int  xoakt(char s[50])
{
    for(int i=0;i<strlen(s);i++)
		if(s[i]==' '&& s[i+1]==' ')
		{
			xoa(s,i);
			i--;
		}
    if(s[0]==' ')
		xoa(s,0);
    if(s[strlen(s)-1]==' ')
		xoa(s,strlen(s)-1);
}
int chuanhoa(char s[50])
{ int i=0;
	strlwr(s);
	xoakt(s);
	s[0]=s[0]-32;
	for(int i=0;i<strlen(s);i++)
		{ 
		if(s[i]==' '&& s[i+1]!=' ')
		    s[i+1]=s[i+1]-32;
		}
}

int demtu(char s[50])
{ int demtu=1;
	strlwr(s);
	for(int i=0;i<strlen(s);i++)
		{ 
		if(s[i]==' ')
		     demtu++;
		}
		printf("\n so tu %d",demtu);
}
int demkt(char s[50])
{ int demkytu=0;
  char c,c1;
	printf("\n Nhap mot ky tu:= ");
	scanf("%c",&c);
		fflush(stdin);
  	strupr(s);
    for(int i=0;i<strlen(s);i++)
		{ 
		if(s[i]==toupper(c))
		     demkytu++;
		}
		printf("\n So ky tu %d",demkytu);
}

void ghep(char s[50], char s2[50])
{
  int i, j, size, size1, size2;
    fflush(stdin);
	printf("\n Nhap chuoi S2:");
    gets(s2); 
    chuanhoa(s2);
   size1 = strlen(s);
   size2 = strlen(s2);
   size = size1 + size2;
   j=0; 
 //  s[size1]=" ";
   for(i = size1; i<size; i++ )
    {
      s[i] = s2[j];
      		j++;
   }
        s[i] = '\0';
   printf("\nKet qua sau khi noi chuoi la:\n");
   printf("%s", s);
}     
     	
     	 	
