#include <stdio.h>

    int main()
    
    {
    	int year; 
    	
    	printf("Enter a Year :\n");
    	scanf("%d" ,&year);
    	
    	if(year%400==0)
    	{
    		printf("Leap year");
		}
		else if(year%4==0&& year%100!=0)
		{
		    printf("Leap year");
	    }
	    else 
	    {
	    	printf("Not a Leap year");
		}
	return 0;
	}