#include <stdio.h>
int main()
{
	char name[30];
	int roll;
	float sub[5];
	float percentage;
	char grade;
	printf("Enter the name of the student : ");
	scanf("%s",name);
	printf("Enter the roll number of the student : ");
	scanf("%d",&roll);
	for(int i = 0 ; i < 5 ; i++)
	{
		printf("Enter the marks of subject %d : ",i+1);
		scanf("%f",&sub[i]);
	}
	if(sub[0] > 100 || sub[1] > 100 || sub[2] > 100 || sub[3] > 100 || sub[4] > 100 || sub[0] < 0 || sub[1] < 0 || sub[2] < 0 || sub[3] < 0 || sub[4] < 0)
	{
		printf("Invalid Marks");
	}
	else
	{
	    percentage = (sub[0]+sub[1]+sub[2]+sub[3]+sub[4])/5;
	    if(sub[0] >= 40 && sub[1] >= 40 && sub[2] >= 40 && sub[3] >= 40 && sub[4] >= 40 && 100 >=sub[0] && sub[0]>= 0 && 100 >=sub[1] && sub[1]>= 0 && 100 >=sub[2] && sub[2]>= 0 && 100 >=sub[3] && sub[3]>= 0&& 100 >=sub[4] && sub[4]>= 0)
	    {
	    	printf("================================\n");
	    	printf("STUDENT DETAILS\n\n");
	        printf("Name of the student is %s\n",name);
	        printf("Roll Number of the student is %d\n",roll);
	        printf("Marks in first subject is %.2f\n",sub[0]);
	        printf("Marks in second subject is %.2f\n",sub[1]);
	        printf("Marks in third subject is %.2f\n",sub[2]);
	        printf("Marks in forth subject is %.2f\n",sub[3]);
	        printf("Marks in fifth subject is %.2f\n",sub[4]);
	        printf("Percentage of the student is %.2f\n",percentage);
            if(percentage >= 90)
            {
   	         printf("The grade of the student is A\n");
            }
            else if(percentage >= 75)
            {
   	         printf("The grade of the student is B\n");
            }
            else if(percentage >= 60)
            {
   	         printf("The grade of the student is C\n");
            }
            else if(percentage >= 40)
            {
   	         printf("The grade of the student is D\n");
            }
            else 
            {
   	         printf("You are Fail\n");
            }
	     }
	     else
	     {
		     printf("Name of the student is %s\n",name);
		     printf("Roll number of the student is %d\n",roll);
		     printf("Percentage of the student is %f\n",percentage);
		     printf("You are Fail\n");
	     }
	}
	     printf("=================================");
   return 0;
}