#include<stdio.h>
#include<conio.h>
#include<math.h>
void dec_to_hex(long long n)
{
   if(n < 16){
      if(n < 10){
         printf("%d", n);
      }
      else{
         printf("%c", (55 + n));
      }
   }
   else{
      dec_to_hex(n / 16);
      int r = n % 16;
      if(r < 10){
         printf("%d", r);
      }
      else{
         printf("%c", (55 + r));
      }
   }
}

int main()
     { 
       int n;
       printf("\n Nhap Mot So:");
       scanf("%d",&n);
       dec_to_hex(n);
       printf("\n");
       dec_to_hex(282828282828);
       return 0;
     }
