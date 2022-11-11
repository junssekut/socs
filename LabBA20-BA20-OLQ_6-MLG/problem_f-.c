// include stdio for input-output usage
#include <stdio.h>

// main function with returning value 0
int main() {
	
	int i, t, x, ix, res;
	
	scanf("%d", &t);
	
	getchar();
	
	for (i = 1; i <= t; i++) {
		res = 0;
		x = 0;
		ix = 0;
		
		scanf("%d", &x);
		
		for (ix = 1; ix <= x; ix++) {
			int n;
			
			scanf("%d", &n);
			
			getchar();
			
			res += n;
		}
		
		printf("Case #%d: %d\n", i, res);
	}
	
	return 0;
}
