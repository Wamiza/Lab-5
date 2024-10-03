#include <Stdio.h>

    int main()
    {
    	int a,b;
    	
   	printf("Enter First Number : ");
    scanf("%d", &a);
    printf("Enter Second Number : ");
    scanf("%d", &b);
    
    a = a ^ b; 
    b = a ^ b;  
    a = a ^ b;
    
    printf("After Swapping : a = %d, b = %d\n", a, b);

    return 0;
	}