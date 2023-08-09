// Question. Given the length and breadth of a rectangle, Write a Program to find whether the area of the rectangle is greater than its perimeter.

#include<stdio.h>
int main()
{
	printf("Finding Area and Perimeter of A Rectangle");
	int l;
	printf("\n\nEnter the length: ");
	scanf("%d", &l);
	int b;
	printf("Enter the Breadth: ");
	scanf("%d", &b);
	
	int area,peri;
	area = l + b;
	printf("\nArea of Rectangle : %d", area);
	
	peri = 2 * (l+b);
	printf("\nPerimeter of Rectangle: %d", peri);
	
	if (area > peri) {
		printf("\nArea of rectangle is greater than its Perimeter");
	}
	else if (peri > area) {
		printf("\nPerimeter of rectangle is greater than its Area");
	}
	return 0;
}
