#include <stdio.h>

    int main()
    {
    	char character,encrypt,decrypt,choice;
    	int key;
        
        	printf("Enter character to encrypt :");
    	    scanf("%c" ,&character);
    	
        	printf("Enter Key :");
        	scanf("%d" ,&key);
    	
		    encrypt=character+key;
       	    printf("The Encrypted Word is %c:" ,encrypt);
        
	
	    	decrypt=character-key;
		    printf("\nThe Decrypted Word is %c:" ,decrypt);
		  
		 return 0;
	}