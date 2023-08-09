   // Question. Take float input and print the "fractional part" of the real number.

#include<stdio.h>
int main()
{
	float realno;                      // Taking float data type   eg. 6.78, 575.677 etc.
	printf("Enter the number:");     
	scanf("%f", &realno);
	
	int a1 = realno;               // Taking int data type will remove the fractional part. eg.6 , 575 etc
	                               
	float fp = realno-a1;           // Subtracting the ( Float d.type - int d.type = fractional part)   eg.6.78 - 6 = 0.78 
	
	printf("The Fractional part is :%f",fp);
	return 0;

}
