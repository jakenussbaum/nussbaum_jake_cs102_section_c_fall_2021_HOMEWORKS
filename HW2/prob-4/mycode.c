#include <stdio.h>
 
int main(void) {

	int inputcents, quarters, dimes, nickels, pennies;
	printf("Input cents: ");
	scanf("%d", &inputcents);
	quarters = (inputcents/25);
	dimes = ((inputcents -(25*quarters))/10);
	nickels = ((inputcents -(25*quarters)-(10*dimes))/5);
	pennies = (inputcents -(25*quarters)-(10*dimes)-(5*nickels));
	printf("Quarters: %d", quarters);
	printf(" Dimes: %d", dimes);
	printf(" Nickels: %d", nickels);
	printf(" Pennies: %d ", pennies);
 
	return 0;
 
}          
