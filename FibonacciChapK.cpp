#include <stdio.h>

int C(int n, int k)
     {
       if(n == k || k == 0)
	     {
            return 1;
         }
       else
        {
            return C(n - 1, k - 1) + C(n - 1, k);
        }
     }
int main()
     {
  	   int m, n;
 	   printf("Nhap Mot So M:");
	   scanf("%d",&m);
	   printf("Nhap Mot So N:");
	   scanf("%d",&n);
       printf("%d", C(m, n));
       return 0;
     }
