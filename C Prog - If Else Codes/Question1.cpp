 // Question. Take a positive integer input and tell if it is divisible by 5 or not.

#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	if (n%5 == 0)
	{
		printf("Number %d is divisible by 5");
	}
	else {
		printf("Number %d is not divisible by 5");
	}
	return 0;
	}
