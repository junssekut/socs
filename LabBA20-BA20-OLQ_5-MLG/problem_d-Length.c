#include <stdio.h>
#include <string.h>

int main() {
	int i, t;
	
	scanf("%d", &t);
	
	getchar();
	
	for (i = 1; i <= t; i++) {
		char x[256];
		
		scanf("%s", x);
		
		getchar();
		
		printf("Case #%d: %d\n", i, strlen(x));
	}
	
	return 0;
}
