#include<stdio.h>
int main()
{ 
	float s1,s2,s3,s4,s5;
	float percentage;
											// Marks in DSA
	printf("Enter the Marks of DSA :");
	scanf("%f", &s1);  
	
											// Marks in HMSC
	printf("Enter the Marks of HSMC :");
	scanf("%f", &s2);

										    // Marks in ESC
	printf("Enter the Marks of ESC :");
	scanf("%f", &s3);

  											// Marks in Maths
	printf("Enter the Marks of Maths :");
	scanf("%f", &s4);
	
											// Marks in C++
	printf("Enter the Marks of C++ :");
	scanf("%f", &s5);
	
	
	// To Find the percentage of These Subjects.
	float p = (s1+s2+s3+s4+s5)/5;
    printf("\nThe Percentage: %f",p);
	
	return 0;
}
