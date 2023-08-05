// To find if a number is Even or Odd using IF else statement
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the Number:");
	scanf("%d", &n);
	
	if ( n%2 == 0) 
	{
		printf("Even Number");
	}
	else {
		printf("Odd Number");
	}
	return 0;
}
