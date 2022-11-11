#include <stdio.h>

void s(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void sort(int arr[], int n)
{
    int i, j, min_idx;
 
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
 
        s(&arr[min_idx], &arr[i]);
    }
}

int main() {
	int i, daging, sayur, telur;
	
	scanf("%d %d %d", &daging, &sayur, &telur);
	
	getchar();
	
	int arr[] = { daging, sayur, telur };
	int size = sizeof(arr) / sizeof(arr[0]);
	
	sort(arr, size);
	
	for (i = size - 1; i >= 0; i--) {
		if (arr[i] == daging)
			printf("Daging\n");
		
		if (arr[i] == sayur)
			printf("Sayur\n");
		
		if (arr[i] == telur)
			printf("Telur\n");
		
	}
	
	return 0;
}
