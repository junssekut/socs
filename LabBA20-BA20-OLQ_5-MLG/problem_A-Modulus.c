// include stdio for input-output usage
#include <stdio.h>

// main function with returning value 0
int main() {
	// initialize variable for holding the user input
	int firstNumber, secondNumber;
	
	// scan user input and assign it to our number variable holder
	scanf("%d %d", &firstNumber, &secondNumber);
	
	getchar();
	
	// print out the output of the result using modulo ( % )
	printf("%d\n", firstNumber % secondNumber);
	
	return 0;
}
