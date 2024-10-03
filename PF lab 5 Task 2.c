#include <stdio.h>

    int main()
    {
    	int number;
    	
    	printf("Enter A Number :");
    	scanf("%d" ,&number);
    	
    	if(number<0) {
		 printf("The Number Is Negative");
		}
		else if(number==0) {
		 printf("The Number Is Zero");
    	}
    	else {
	    	if(number%2==0){
    			printf("The Number is Even\n");
    		}
    	   else{
		   	   	printf("The Number is Odd\n");
		   	   }
	}
    	return 0;
	}