#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
// Tao San 1 File khi chay : go D:/Tenfile sau do enter va nhap cai gi thi nhap

int main()
     {
     	FILE * fp;
     	char filename[67], ch;
     	printf("Filename:");
     	gets(filename);
     	if ((fp= fopen (filename, "w"))==NULL)
     	{
     		printf("\n Cretine file error ");
     		exit(1);
     	}	
     	while ((ch= getche() )!= '\r' )
     	    putc ( ch, fp);
     	fclose (fp);
     	return 0;
     }
	 	
