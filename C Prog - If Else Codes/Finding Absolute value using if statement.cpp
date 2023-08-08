#include<stdio.h>
int main()
{
	int n;                          
	printf("Enter the number: ");
	scanf("%d", &n);
	
	if ( n<0 ) {                      // if the value of n<0 that means it is a -ve number.
		n = n * (-1);                // We Use this condition to convert the -ve value to a +ve value
	}
	
 printf("The absolute value of the integer is :")
  return 0;
}
