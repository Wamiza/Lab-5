#include <stdio.h>
   
    int main()
    {
    	int number;
    	
    	printf("Enter Number");
    	scanf("%d" ,&number);
    	
    	number>0 ? printf("Number is Positive\n") : 
		(number==0 ? printf("Number is Zero\n") : printf("Number is Negative\n"));
    	
    	
    	return 0;
	}