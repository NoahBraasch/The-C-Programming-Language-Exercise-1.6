
// Note: To invoke EOF character on windows type Ctrl + Z and hit enter.

#include <stdio.h>

int main(){

	int c;

	printf("EOF comparison value: %d", ((c = getchar()) != EOF));

	return 0;
}