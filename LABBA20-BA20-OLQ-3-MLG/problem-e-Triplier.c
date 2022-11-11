/*
	Arjuna Andio - 2602200016 - LA20
	
	Week 3 - Problem E: Triplier
	
	input
	1 2 3
	
	output 
	6
*/

#include <stdio.h>

unsigned long long int calculate(int *n, int size) {
	unsigned long long int result = 1;
	for (int i = 0; i < size; i++) result *= n[i];
	return result;
}

void wait() { for (int i = 0; i < 2; i++) getchar(); }

int main() {
	int t, s = 3; // temp, scan size
	int n[s]; // int holder
	
	for (int i = 0; i < s; i++) { scanf(i == s - 1 ? "%d" : "%d ", &t); n[i] = t; } // main handler
	
	printf("%llu\n", calculate(n, s));
	
	wait();
		
	return 0;
}
