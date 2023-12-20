#include <stdio.h>

int D(long long n){
   if(n < 10){
      return 1;
   }
   else{
      return 1 + D(n / 10);
   }
}

int main()
{
   long long n;
   printf("\n Nhap Mot So:");
   scanf("%d",&n);
   printf("%d", D(n));
   return 0;
}
