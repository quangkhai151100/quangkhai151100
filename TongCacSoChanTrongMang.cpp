#include <stdio.h>

int even_sum(int a[], int n){
   if(n == 0){
      return 0;
   }
   else{
      if(a[n - 1] % 2 == 0){
         return a[n - 1] + even_sum(a, n - 1);
      }
      else{
         return even_sum(a, n - 1);
      }
   }
}

int main()
{
   int n;
   int a[n];
   printf("\n Nhap Phan Tu Mang:");
   scanf("%d",&n);
   for(int i=0; i<n; i++)
   {
   	printf("Phan Tu Thu [%d]:",i);
   	scanf("%d",&a[i]);
   }
   printf("%d\n", even_sum(a, n));
   return 0;
}
