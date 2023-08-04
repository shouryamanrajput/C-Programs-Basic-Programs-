// A test of 5 subjects is conducted, each test is of 70 Marks. Find the percentage of marks scored in each subjects Also the percentage of all the subjects in total.

#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5;
	
	printf("Marks of s1:");
	scanf("%d", &s1);
	
	printf("Marks of s2:");
	scanf("%d", &s2);
	
	printf("Marks of s3:");
	scanf("%d", &s3);
	
	printf("Marks of s4:");
	scanf("%d", &s4);
	
	printf("Marks of s5:");
	scanf("%d", &s5);
	
	                                          // Total Marks
	int total = s1+s2+s3+s4+s5;
	printf("\nTotal Marks obatined: %d",total);
	
	int overall = 5*70;
	printf("\nOverall Marks: %d",overall);
	
	
	
    
                                            // Percentage
    
	float p1 = (s1/70.0)*100;
	printf("\n\nPercentage of s1: %f",p1);
	                               
    float p2 = (s2/70.0)*100;
	printf("\nPercentage of s2: %f",p2);
	   
    float p3 = (s3/70.0)*100;
	printf("\nPercentage of s3: %f",p3);  
	 
	float p4 = (s4/70.0)*100; 
	printf("\nPercentage of s4: %f",p4);
	  
	float p5 = (s5/70.0)*100; 
	printf("\nPercentage of s5: %f",p5);  
	
	
	
	float tp = p1+p2+p3+p4+p5;
	float op = tp/5.0;
	
	printf("\n\nOverall Percentage: %f", op);
	
	
	return 0;
}
