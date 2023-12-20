#include <stdio.h>
void dec_to_bin(long long n)
     {
          if(n < 2)
       {
          printf("%d", n);
       }
          else
	   {
          dec_to_bin(n / 2);
          printf("%d", n % 2);
       }
     }
int main()
     {
    	int n;
	    printf("\n Nhap Mot So:");
	    scanf("%d",&n);
        dec_to_bin(n);
        printf("\n");
        dec_to_bin(n);
        return 0;
     }
