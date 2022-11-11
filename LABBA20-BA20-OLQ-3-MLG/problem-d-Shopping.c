/*
	Arjuna Andio - 2602200016 - LA20
	
	Week 3 - Problem D: Shopping
	
	input 
	75 25
	0 50
	69 420
	17 1337
	
	output
	$100.00 
	$50.00 
	$1354.84 
	$1610.84
*/

#include <stdio.h>

float calculate(int *n) {
	// 75 25
	// 75 diskon
	// 25 harga setelah diskon
	// $100.00 harga asli
	
	// ( 25 / ( 100 - 75 ) ) * 100
	return (
		(( n[1] / (100.0 - n[0])) * 100.0)
	);
}

void wait() { for (int i = 0; i < 2; i++) getchar(); }

int main() {
	int t, s = 4, c = 0; // temp, count size, counter
	
	int n[s][2]; // int holder
	
	for (int h = 0; h < 2; h++) { // function handler
		for (int i = 0; i < s; i++) { // main handler
			if (h == 0) {  // counter handler
				c = 0; // reset counter
				
				for (int j = 0; j < 2; j++) {
					scanf(i == s - 1 ? "%d" : "%d ", &t);
					
					n[i][c++] = t;
				}
			}
			
			if (h == 1) printf("$%.2f\n", calculate(n[i])); // result handler
		}
	}

	wait();
	
	return 0;
}
