#include<stdio.h>
void main()
{
int m;
printf("Enter the number");
scanf("%d",&m);
	
         	if(m<=200)
     		{	
	        	if(m<=150)
	        	{
		        	if(m<=100)		
			          {
				        	if(m<=50)
				        	{
				                	printf("Fail");
				        	}
			 		
		                                else
		                        	{
		                        	printf("C");
			 	        	}
	                       	}
	                	else
	                 	{
	                 	printf("B");
	                 	}
	
 	  	        }
	 		else
			printf("A");
                  }
    	 	else
		printf("A+");


}
