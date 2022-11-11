#include <stdio.h>

int main() {
	int t, n, o, c;
	char s[1001];
	char ct;
	
	scanf("%d", &t); 
	
	getchar();
	
	for (int i = 1; i <= t; i++) {
		scanf("%d %s", &n, s);
		
		getchar();
		
		for (int j = 1; j <= n; j++) {
			scanf("%d %d", &o, &c);
			
			getchar();
			
			while (o <= c) {
				ct = s[o - 1]; 
				s[o - 1] = s[c - 1]; 
				s[c - 1] = ct; 
				o++; 
				c--;
			}
		}
		
		printf("Case #%d: %s\n", i, s);
	}
	
	return 0;
}
