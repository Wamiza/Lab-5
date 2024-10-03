#include <stdio.h>

  int main()
  {
  	int age,income,credit;
  	
  	printf("Enter Age :");
  	scanf("%d" ,&age);
  	printf("Enter Income :");
  	scanf("%d" ,income);
  	printf("Enter Credit Scores :");
  	scanf("%d" ,credit);
  	
  	if(age>=18 && income>1000)
  	  {
  	  	printf("You Are Eligible for the Limited Amount of the Loan");
	  }
	else if(age>=18 && credit>0)
  	  {
  	  	printf("You Are Eligible for the Limited Amount of the loan");
	  }
	else if(age>=18 && income>10000 && credit>0)
  	  {
  	  	printf("You Are Eligible for the Greater Amount of the loan");
	  }
  	else
	  {
	  	printf("You are not Eligible for the Loan");
   	  }  
  return 0;	
  }