#include <stdio.h>

int p(num) {
	int i, j, b, c;
	
	c = 0;
	
	for (i = 2; i <= num; i ++) {
		if (num % i == 0) {
			b = 1;
			
			for (j = 2; j <= i / 2; j++) {
				if (i % j == 0) {
					b = 0;
					break;
				}
			}
			
			if (b == 1)
				c += i;
		}
	}
	
	return c;
}

int main() {
   	int i, t;
   	
   	scanf("%d", &t);
   	
   	getchar();
   		
   	for (i = 1; i <= t; i++) {
   		int x;
		
		scanf("%d", &x);	
		
		getchar();
		
		printf("Case #%d: %d\n", i, p(x));
	}

    return 0;
}
