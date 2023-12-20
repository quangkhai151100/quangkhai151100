#include <stdio.h>

int S(int n){
   if(n == 1){
      return 1;
   }
   else{
      return n * n + S(n - 1);
   }
}

int main()
{
   int n;
   printf("Nhap Mot So:");
   scanf("%d",&n);
   printf("%d", S(n));
   return 0;
}
