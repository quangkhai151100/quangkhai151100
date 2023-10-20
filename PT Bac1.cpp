#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
     {
     	int a,b;
     	printf("Nhap A:");
     	scanf("%d",&a);
     	printf("Nhap B:");
     	scanf("%d",&b);
     	
     	if (a==0)
     	{
        if (b==0)
        {
        	printf("\n Phuong Trinh Co Vo So Nghiem");
        }
		 else 
		{
		    printf("\n Phuong Trinh Vo Nghiem");
		}
		}
		else
		{
	    float x= (float)-b/a;
		printf("\n Phuong Trinh Co Nghiem La : %.4f",x);
		
	    }
	}	
        	
		 
