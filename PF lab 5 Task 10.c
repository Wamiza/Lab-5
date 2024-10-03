#include <stdio.h>
  
    int main()
    {
    	int number;
    	int sumofdigits = 0;
    	
    	printf("Enter the Number:");
    	scanf("%d" ,&number);
    	
    	if(number<0){
    		number = - number;
    	}
    	if(number == 0){
    		printf("The sum of digits is zero.");
		}
		while(number>0){
    	    sumofdigits+=number % 10;
    	    number = number/10;
            }
        printf("The sum of digits is:%d", sumofdigits);
    return 0;
	}