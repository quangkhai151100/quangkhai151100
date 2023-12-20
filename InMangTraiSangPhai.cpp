#include <stdio.h>

void left_to_right(int a[], int n){
   if(n > 0){
      left_to_right(a, n - 1);
      printf("%d ", a[n - 1]);
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
   left_to_right(a, 6);
   return 0;
}
