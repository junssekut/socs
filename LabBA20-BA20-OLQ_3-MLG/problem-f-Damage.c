/*
	Arjuna Andio - 2602200016 - LA20
	
	Week 3 - Problem F: Damage
	
	input
	80 90 100
	
	output
	93.00
*/

#include <stdio.h>

float calculate(int *n) {
	return (
		(n[0] * 20.0 / 100.0) +
		(n[1] * 30.0 / 100.0) +
		(n[2] * 50.0 / 100.0)
	);
}

void wait() { for (int i = 0; i < 2; i++) getchar(); }

int main() {
	int t, s = 3; // temp, scan size
	int n[s]; // int holder
	
	for (int i = 0; i < s; i++) { scanf(i == s - 1 ? "%d" : "%d ", &t); n[i] = t; }
	
	printf("%.2f\n", calculate(n));
	
	wait();
	
	return 0;
}
