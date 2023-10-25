#include<stdio.h>
#include<string.h>
int hoathuong();
int main()
     {
     	char string[100];
     	printf("Nhap Mot Ky Tu Bat Ky:");
     	gets(string);
     	strupr(string);
//     	printf("=========================");
     	printf("\n Ky Tu Hoa La:%s",string);
//     	if(string != strupr)
//     	strlwr(string);
//     	printf("\n Ky Tu Thuong La:%s",string);
     	
//     	return 0;
     	
     	
     	strlwr(string);
     	printf("\n Ky Tu Thuong La:%s",string);
        return 0;	
    }

    		
