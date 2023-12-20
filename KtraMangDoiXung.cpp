#include <stdio.h>

int doixung(int a[], int left, int right){
   if(left > right){
      return 1;
   }
   else{
      if(a[left] != a[right]){
         return 0;
      }
      else{
         return doixung(a, left + 1, right - 1);
      }
   }
}

int main()
{
   int n;
   int a[n];
   printf("Nhap Phan Tu Mang:");
   scanf("%d",&n);
   for(int i=0; i<n; i++)
   { 
      printf("Phan Tu Thu [%d]:",i);
      scanf("%d",&a[i]);
   }  
   printf("%d\n", doixung(a, 0, n - 1));
   return 0;
}
