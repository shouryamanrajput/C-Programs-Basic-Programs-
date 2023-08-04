// Q. Finding Area of Circle.

#include<stdio.h>
int main()
{
	float r;                  // The variable "r" Represents Radius.
	printf("Enter the radius: ");
	scanf("%f",&r);
	
	float pi = 3.1415;             // The variable "pi" Represents PI = 3.1415.
	
	float Area = pi * r * r;     
	printf("Area of Circle: %f",Area);
	
	return 0;	
}
