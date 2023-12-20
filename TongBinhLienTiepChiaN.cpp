#include <stdio.h>

double S(int n){
   if(n == 1){
      return 1;
   }
   else{
      return (double)1 / n + S(n - 1);
   }
}

int main()
     {
       int n;
       printf("Nhap Mot Day:");
       scanf("%d",&n);
       printf("%.2lf", S(n));
       return 0;
     }
