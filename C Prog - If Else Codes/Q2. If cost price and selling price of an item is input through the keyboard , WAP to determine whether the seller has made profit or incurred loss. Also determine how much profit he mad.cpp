// Question. If cost price and selling price of an item is input through the keyboard , WAP to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred

#include<stdio.h>
int main()
{
	int CP;    // variable CP here stands for Cost Price of an item
	printf("Enter the Cost Price of the item: ");
	scanf("%d", &CP);
	
	int SP;   // variable SP here stands for Selling Price of an item
    printf("Enter the Selling Price of the item: ");
    scanf("%d", &SP);
    
    int loss;
    
    if ( CP > SP ) {
    	loss = CP - SP;
    	printf("\nYou got loss of : %d", loss);
	}
	
	int profit;
	
     if ( CP < SP) {
		profit = SP - CP;
    	printf("\nYou got profit of : %d", profit);
	}
	
	int NPNL;
	
	if ( CP == SP ) {
		
		NPNL = CP - SP;
		printf("\nNo profit No loss : %d", NPNL);
	}
	
	return 0;
}
