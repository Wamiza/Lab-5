#include <stdio.h>

     int main()
     {
     	int age,citizen;
     	
     	printf("Enter Age");
     	scanf("%d" ,&age);
     	printf("Enter 1 If You have Citizenship And Enter 2 If You have not Citizenship");
     	scanf("%d" ,&citizen);
     	
     	if(age>=18)
     	 {
     	 	if(citizen==1){
     	 		printf("You Are Eligible For Voting");
			  }
			else{
				printf("You Are Not Eligible For Voting");
			}
		  }
		else{
			printf("You Are Not Eligible For Voting");
		}
		return 0;
	 }