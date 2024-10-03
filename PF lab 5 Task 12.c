#include <stdio.h>
 
   int main()
   {
   	int Grades,attendance,assignment;
   	
   	printf("Enter attendance in Percentage: ");
   	scanf("%d" ,&attendance);
   	printf("Enter Exams Grades in Percentage :");
   	scanf("%d" ,&Grades);
   	printf("Enter Assignment Score in Percentage :");
   	scanf("%d",&assignment );
   	
   		Grades=Grades*80/100;
       	assignment=assignment*20/100;
   	
    if(attendance>=70 && attendance <75)
    {
       if(Grades>50/100)
       	{
       		printf("Grades Will Be :%d" , Grades=Grades+assignment);
		}
		{
			printf("\nFail ");
		}
    } // First if end
	else if(attendance>=75 && attendance <80)
	{
       if(Grades>50/100)
       	{
       		printf("Grades Will Be :%d" , Grades=Grades+assignment+1);
		}
		{
			printf("\nFail");
	    }
    } // Second if end
    else if(attendance>=80 && attendance <85)
	{
       	if(Grades>50/100)
       	{
       		printf("Grades Will Be :%d" , Grades=Grades+assignment+2);
		}
		{
			printf("\nFail");
	    }
    } // Third if end
    else if(attendance>=85 && attendance <90)
	{
       	if(Grades>50/100)
       	{
       		printf("Grades Will Be :%d" , Grades=Grades+assignment+3);
		}
		{
			printf("\nFail");
	    }
    } // Fourth if end
    else if(attendance>=90 && attendance <95)
	{
       	if(Grades>50/100)
       	{
       		printf("Grades Will Be :%d" , Grades=Grades+assignment+4);
		}
		{
			printf("\nFail");
	    }
    } // Fifth if end
    else if(attendance>=95 && attendance <=100)
	{
       	if(Grades>50/100)
       	{
       		printf("Grades Will Be :%d" , Grades=Grades+assignment+5);
		}
		{
			printf("\nFail");
	    }
    } // Sixth if end
	else
	{
		printf("\nYou Are Fail");
	}
    return 0;
   }// main end