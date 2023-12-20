#include <stdio.h>

int S(int n){
   if(n == 1){
      return 1;
   }
   else{
      return n + S(n - 1);
   }
}

int main()
{
   int n;
   printf("Nhap So Muon Tinh Tong Mot Day:");
   scanf("%d",&n);
   printf("%d", S(n));
   return 0;
}
