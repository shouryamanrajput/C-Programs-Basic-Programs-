 // Question. Take 4 distinct positive integers input and print the greatest of them.
#include<stdio.h>
int main()
{
	int n1,n2,n3,n4;
	printf("Enter the 1st number: ");
	scanf("%d", &n1);
	
	printf("Enter the 2nd number: ");
	scanf("%d", &n2);
	
	printf("Enter the 3rd number: ");
	scanf("%d", &n3);
	
	printf("Enter the 4th number: ");
	scanf("%d", &n4);
	
	if ( n1>n2 && n1>n3 && n1>n4) {
		printf("\n%d number is the greatest: ");
	}
	if ( n2>n1 && n2>n3 && n2>n4) {
		printf("\n%d number is the greatest: ");
	}
	if ( n3>n1 && n3>n2 && n3>n4) {
		printf("\n%d number is the greatest: ");
	}	
	if ( n4>n1 && n4>n2 && n4>n3) {
		printf("\n%d number is the greatest: ");
	}
 return 0;	
}
