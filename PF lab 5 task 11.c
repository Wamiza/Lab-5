#include <stdio.h>

   int main()
   {
   	int a,b,c;
   	
    printf("Enter First Number :");
    scanf("%d" ,&a);
	printf("Enter Second Number :");
	scanf("%d" ,&b);
	printf("Enter Third Number :");
	scanf("%d" ,&c);
	
	if(a>b)
	 {
	 	if(a>c)
	 	{
	 		printf("%d is the Greatest Number" ,a);
		}
		else
		{
			printf("%d is the Greatest Number" ,c);
		}
	  }
	else if(b>a)
	{
		if(b>c)
		{
			printf("%d is the Greatest Number" ,b);
		}
		else
		{
			printf("%d is the Greatest Number" ,c);
		}
	 }
	else if(c>a) 
	{
		if(c>b)
		{
			printf("%d is the Greatest Number" ,c);
		}
		else
		{
			printf("%d is the Greatest Number" ,b);
		}
	}
	else
	{
		printf("Invalid Input");
	}
	return 0;
   }