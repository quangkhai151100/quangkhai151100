#include <stdio.h>

int S(long long n){
   if(n < 10){
      if(n % 2 == 1) return 0;
      else return n;
   }
   else{
      if(n % 2 == 1) return S(n / 10);
      else return n % 10 + S(n / 10);
   }
}

int main()
     {
     	
        long long n;
        printf("\n Nhap Mot Day So:");
        scanf("%d",&n);
        printf("%d", S(n));
        return 0;
    }
