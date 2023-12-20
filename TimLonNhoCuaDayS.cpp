#include <stdio.h>

int F(long long n){
   if(n < 10){
      return n;
   }
   else{
      int tmp = F(n / 10);
      return n % 10 > tmp ? n % 10 : tmp;
       }
       
       
   if(n < 10){
      return n;
   }
   else{
      int tmp = F(n / 10);
      return n % 10 < tmp ? n % 10 : tmp;
       }    
}

int main()
{
   long long n;
   printf("\n Nhap Mot Day So:");
   scanf("%d",&n);
   printf("%d", F(n));
   return 0;
}
