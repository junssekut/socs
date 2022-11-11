#include <stdio.h>

int sum(int arr[], int size) {
    int result = 0, i;
    for (i = 0; i < size; i++) result += arr[i];
    return result;
}

int main() {
    int i, t;
    
    int s; // size
    int cy, cx; // counter
    int v; // temp
    
    scanf("%d", &t);
    
    for (i = 1; i <= t; i++) {
        scanf("%d", &s); // assign table size, e.g 2x2
        
        getchar();
        
        int temp[s][s];
        
        printf("Case #%d: ", i);
        
        for (cy = 0; cy < s; cy++) {
               
            for (cx = 0; cx < s; cx++) {
                scanf("%d", &v);
                
                getchar();
                
                temp[cx][cy] = v;
            }

        }
        
        for (cx = 0; cx < s; cx++) {
            
            int res = 0;
            
            for (cy = 0; cy < s; cy++) {
                
                res += temp[cx][cy];
                
            }
            
            printf(cx == s - 1 ? "%d" : "%d ", res);
        }
        
        printf("\n");
    }
    
    return 0;
}
