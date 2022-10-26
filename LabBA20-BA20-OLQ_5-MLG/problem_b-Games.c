#include <stdio.h>

int main() {
	int t, i;
	
	scanf("%d", &t);
	
	getchar();
	
	for (i = 1; i <= t; i++) {
		int x, c;
		
		scanf("%d", &x);
		
		getchar();
		
		char a[256];
		
		scanf("%s", a);
		
		getchar();
		
		int lili = 0;
		int bibi = 0;
		
		for (c = 0; c < x; c++) {
			if (a[c] == 'L')
				lili++;
			
			if (a[c] == 'B')
				bibi++;
					
		}
		
		if (lili > bibi)
			printf("Lili\n");
			
		if (lili == bibi)
			printf("None\n");
			
		if (bibi > lili)
			printf("Bibi\n");
		
	}
	
	return 0;
}
