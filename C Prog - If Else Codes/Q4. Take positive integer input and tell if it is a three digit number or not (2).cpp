// Take positive integer input and tell if it is a three digit number or not
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	
	if (1000>n && n>99 && n>0)
	{
		printf("Its a +ve , three digit number");
	}
	 else  {
		printf("Its not a +ve three digit number");
	}
	return 0;
	
}
