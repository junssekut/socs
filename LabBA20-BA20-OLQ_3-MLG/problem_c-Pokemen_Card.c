/*
	Arjuna Andio - 2602200016 - LA20
	
	Week 3 - Problem C: Pokemen Card
	
	input
	100000 20000
	
	output
	5
*/

#include <stdio.h>

void wait() { for (int i = 0; i < 2; i++) getchar(); }

int main() {
	int money, cost;
	
	scanf("%d %d", &money, &cost); 
	
	printf("%d\n", ( money / cost ));
	
	wait();
	
	return 0;
}
