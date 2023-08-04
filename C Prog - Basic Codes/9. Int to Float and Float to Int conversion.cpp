#include<stdio.h>
int main()
{
	printf("**INTEGER to FLOAT conversion**");
	
	int num;                                       // here "num" represents an integer value
	printf("\n\nEnter the integer value : ");
	scanf("%d", &num);
	
    float y = num;                                 // here "y" variable contains the "num"(i.e An integer value) , changing integer value to a float value. 
    printf("Converted integer value %d to the float value : %f", num, y);
    
    
    
    
    printf("\n\n**FLOAT to INTEGER conversion**");
    
    float num1;                                    // here "num1" represents a float value
    printf("\n\nEnter the float value : ");
	scanf("%f", &num1);
	
	int y1 = num1;                                 // here "y1" variable contains the "num1"(i.e A float value) , changing float value to an integer value.
    printf("Converted float value %f to the integer value : %d", num1, y1);
    
    return 0;
}
