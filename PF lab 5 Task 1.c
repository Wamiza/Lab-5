#include <stdio.h>

    int main()
    {
    	int age;
    	
    	printf("Enter Age :");
    	scanf("%d" ,&age);
    	
    	if(age>=0 && age<=12)
    	{
    		printf("YOU ARE A CHILD");
		}
		else
		{
		   if(age>=13 && age<=19)
		   {
        	printf("YOU ARE A TEENAGER");
	    	}
	    	else
			{
		      if(age>=20 && age<=64)
	        	{
    	    	printf("YOU ARE AN ADULT");
	        	}
		      else
		      {
		        if(age>=65)
	           	   {
    	        	printf("YOU ARE A SENIOR");
	            	}
	            else
	            	{
		        	printf("Invalid Input");
	            	}
	           }
	        }
	    }
	return 0;
}