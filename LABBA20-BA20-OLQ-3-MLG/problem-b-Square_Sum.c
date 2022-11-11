/*
	Arjuna Andio - 2602200016 - LA20
	
	Week 3 - Problem B: Square Sum
	
	input
	0 0 0 0
	1 2 3 4
	2 4 9 16
	
	output
	0.00
	16.00
	46.00
*/

#include <stdio.h>

float calculate(int *n) {
	int a = n[0], b = n[1], c = n[2], d = n[3];
	
	return (
		(a / 1) + (b / 2) + (c / 3) + (d / 4) +
		(b / 2) + (c / 3) + (d / 4) + (c / 3) +
		(c / 3) + (d / 4) + (c / 3) + (b / 2) +
		(d / 4) + (c / 3) + (b / 2) + (a / 1)
	);
}

void wait() { for (int i = 0; i < 2; i++) getchar(); }

int main() {
	int t; // temp
	
	int s[2]; // size
	
	s[0] = 4; // 0 0 0 0 -> x size
	s[1] = 3; // 0\n0\n0 -> y size
	
	int n[s[0]][s[1]]; // int holder
	int h[s[0]]; // int holder of result x
		
	for (int i = 0; i < 2; i++) { // function handler
		for (int y = 0; y < s[1]; y++) { // y handler
			
			for (int x = 0; x < s[0]; x++) { // x handler
				if (i == 0) { scanf(x == s[0] - 1 ? "%d" : "%d ", &t); n[x][y] = t; } // input handler
				if (i == 1) h[x] = n[x][y]; // counter handler
			}
			
			if (i == 1) { printf("%.2f\n", calculate(h)); } // result handler
		}
	}
	
	wait();
		
	return 0;
}
