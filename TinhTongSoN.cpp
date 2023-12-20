#include <stdio.h>

int S(long long n){
   if(n < 10){
      return n;
   }
   else{
      return n % 10 + S(n / 10);
   }
}

int main()
{

   long long n;
   printf("\n Nhap Mot So:");
   scanf("%d",&n);
   printf("%d", S(n));
   return 0;
}
