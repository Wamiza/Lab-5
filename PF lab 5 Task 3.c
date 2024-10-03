#include <stdio.h>

   int main()
   {
   	int number;
   	
   	printf("Enter Number");
   	scanf("%d" ,&number);
   	
   	if(number%3==0 && number%5==0){
   		printf("The Number is divisible by 3 and 5");
	   }
	else{
		printf("The Number is not divisible by 3 and 5");
	}
	   return 0;
   }