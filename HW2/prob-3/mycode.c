#include <stdio.h>

float floatinput;
int intinput;
char characterinput;

int main() {
	
     floatinput = 5.6;
     intinput = 7;
     characterinput = 'J';
 
     printf("%f as %%d: %d\n", floatinput, floatinput);
     printf("%d as %%f: %f\n", intinput, intinput);
     printf("%c as %%d: %d\n", characterinput, characterinput);
 
     return(0);
}
