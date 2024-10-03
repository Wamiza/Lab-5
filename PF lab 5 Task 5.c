#include <stdio.h>
  
   int main()
   {
   	 int a,b;
   	 
   	 printf("Enter First Number :");
   	 scanf("%d" ,&a);
   	 printf("Enter Second Number :");
   	 scanf("%d" ,&b);
   	 
   	 a>b ? printf("%d is Greatest" ,a) : printf("%d is Greatest" ,b);
   	 
   	 return 0;
   }
