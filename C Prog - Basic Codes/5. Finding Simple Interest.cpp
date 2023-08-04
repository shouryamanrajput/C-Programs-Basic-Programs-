// Q. Program to Find The S.I (Simple Interest)

   #include<stdio.h>
   int main() 
   {
   	float p;                        // Varibale "p" represents Principle.
   	printf("Enter the Principle: ");
   	scanf("%f",&p);
   	
   	float r;                       // Varibale "r" represents rate.
   	printf("Enter the Rate: ");
    scanf("%f", &r);
    
    float t;                       // Varibale "t" represents time.
    printf("Enter the Time given : ");
    scanf("%f", &t);
    
    float SI = (p*r*t)/100.0;      // Variable "SI" represents Simple Interest.
    printf("Simple Interest : %f",SI);
    
   }
    
    



