// Question Take 3 number and tell if they can be the sides of a triangle.
#include<stdio.h>
int main()
{
	int a;
	printf("Enter the side A: ");
	scanf("%d", &a);
	int b;
	printf("Enter the side B: ");
	scanf("%d", &b);
	int c;
	printf("Enter the side C: ");
	scanf("%d", &c);
	
	if ( a+b > c && b+c > a && c+a > b) {
		printf("Valid triangle");
	}
	else  {
		printf("Invalid triangle");
	}  
	return 0;	
}
