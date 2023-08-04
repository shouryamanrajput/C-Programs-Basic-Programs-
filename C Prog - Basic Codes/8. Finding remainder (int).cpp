#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the 1st value: ");  // the value denoted with variable "a" is Divident
	scanf("%d",&a);
	
	printf("Enter the 2nd value: ");  // the value denoted with variable "b" is Divisor
	scanf("%d",&b);                   
	                                  // Also q = Quotient , r = Remainder.
	
	int q = a/b;                      // formula Used, Divident = Divisor * quotient + remainder
	                                  // We get, remainder = divident - Divisor * quotient
	                                  // i.e   r = a -(b*q)
	                                  
	int r = a -(b*q);
	printf("The remainder when %d is divided by %d is : %d", a,b,r);
	return 0;
	
		}
