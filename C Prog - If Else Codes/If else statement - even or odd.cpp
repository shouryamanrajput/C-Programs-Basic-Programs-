// To find if a number is Even or Odd using IF else statement
#include<stdio.h>
int main()
{
	int n;                         // Defined 'n' variable
	printf("Enter the Number:");  
	scanf("%d", &n);               // Value is saved in 'n' varibale
	
	if ( n%2 == 0) 
	{
		printf("Even Number");    // If condition is true 
	}
	else {
		printf("Odd Number");     // If condition is not true
	}
	return 0;
}
