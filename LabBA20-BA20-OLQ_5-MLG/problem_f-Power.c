#include <stdio.h>

int power(long long int x, long long int y, int p) {
	int res = 1;
	
	x = x % p;
	
	if (x == 0) return 0;
	
	while (y > 0) {
		if (y & 1)
			res = (res * x) % p;
			
		y = y >> 1;
		x = (x * x) % p;
	}
	return res;
}

int main() {
		
	int i, t;
	long long int x, y;
	
	scanf("%d", &t);
	
	for (i = 1; i <= t; i++) {
		scanf("%lli %lli", &x, &y);
		
		printf("Case #%d: %lli\n", i, power(x, y, 1000000007));
	}
		
	return 0;
}
