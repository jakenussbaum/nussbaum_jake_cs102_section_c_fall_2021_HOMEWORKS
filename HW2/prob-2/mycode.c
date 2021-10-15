#include <stdio.h>

int main() {

	int inputminutes, hours, minutes;
	printf("Input minutes: ");
	scanf("%d", &inputminutes);
	hours = (inputminutes/60); 
	minutes = (inputminutes -(60*hours));
	printf("Hours: %d", hours);
    printf("Minutes: %d", minutes);
	
	return 0;

}
