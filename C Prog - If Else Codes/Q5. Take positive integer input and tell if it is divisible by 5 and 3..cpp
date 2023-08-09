// Question. Take positive integer input and tell if it is divisible by 5 and 3.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	                                                              // all the possibilites
	                                                              
	if ( n%5==0 && n%3==0 ) {
		printf("\nThe number %d is divisible by both 3 and 5");
	}
	
	else if ( n%5==0) {
		printf("\nThe number %d is divisible by 5");	
	}
	
    else if(n%3==0) {
    	printf("\nThe number %d is divisible by 3");
	}
	
	else if ( n%5!=0 && n%3!=0 ) {
			printf("\nThe number %d is not divisible by either 3 or 5");
	}
	
	return 0;
}
