#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void chon1(char s[50]);
int xoa(char s[50], int vitrixoa);
int xoakitu(char s[50]);
int chuanhoa(char s[50]);
void demkitu(char s[50], char s2[50]);


int main()
     {
     	char s[50], s2[50], key;
    	while(true)
     	{
     		system("cls");
     		printf("\n .---------------------------------------------------.");
     		printf("\n .                    CHUOI KI TU                    .");
     		printf("\n .         1.Nhap Va Chuan Hoa Chuoi S               .");
     		printf("\n .         2.Dem Ki Tu Co Trong Chuoi Vua Nhap       .");
     		printf("\n .         0.Thoat Chuong Trinh                      .");
     		printf("\n .---------------------------------------------------.");
     		fflush(stdin);
     		printf("\n \t\t An Phim De Chon: ");
     		scanf("%d",&key);
     		switch(key)
     		{
     			case 1:
     				fflush(stdin);
     				chon1(s);
     				printf("\n Bam Phim Khac De Tiep Tuc: ");
     				getch();
     				break;
     			case 2:
				    fflush(stdin);
				    demkitu(s,s2);
					printf("\n Bam Phim Khac De Tiep Tuc: ");
					getch();
					break;
				case 0:
				    exit(1);
				default:
				    printf("\n Chuong Trinh Khong Co Chuc Nang Nay!");
				    getch();
					printf("\n Bam Phim Trong Menu Tren De Tiep Tuc!");
					getch();
					break;
			}
	}
}
void chon1(char s[50])	
     {
	     printf("\n Nhap Chuoi:");
		 gets(s);
		 chuanhoa(s);
		 printf("\n Chuoi Chuan Hoa:");
		 puts(s);
     }
int xoa(char s[50], int vitrixoa)
     {
     	int n=strlen(s);
     	for(int i=vitrixoa;i<n;i++)
     	s[i]=s[i+1];
     	s[n-1]='\0';
     }
int xoakitu(char s[50])
     {
     	for(int i=0;i<strlen(s);i++)
     	     if(s[i]==' ' && s[i+1]==' ')
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
     {
     	int i=0;
     	strlwr(s);
     	xoakitu(s);
     	s[0]=s[0]-32;
     	for(int i=0;i<strlen(s);i++)
     	     {
     	     	if(s[i]==' ' && s[i+1]!=' ')
     	     	s[i+1]=s[i+1]-32;
     	     	
     	     }
     }
void demkitu(char s[50],char s2[50])
{    int i,j,ok=1,dem=0;
            printf("Nhap Lai Chuoi S: ");
            gets(s);
            fflush(stdin);
            printf("Nhap Ki Tu Can Dem: ");
            gets(s2);	   
            for(i=0; i<strlen(s); i++)
			 {   if(s[i] == s2[0]) 
			 		{ ok = 1;
                         for(j=0; j<strlen(s2); j++)
						  {
                               if(s2[j] != s[i+j])
							    {  ok = 0;
                                      break;
                                 }
                         }
                     if(ok == 1)
                        dem++;
                     }
             }
             printf("\n So Ki Tu Co Trong Chuoi S La:%d",dem);
}
