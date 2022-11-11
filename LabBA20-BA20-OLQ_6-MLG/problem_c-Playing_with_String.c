#include <stdio.h>
#include <string.h>

int re(char *str, char from, char to) {
    char *s = str;
    int i = 0;
    while((s = strchr(s, from)) != NULL) { *s++ = to; i++; }
    return i;
}

int main() {
    int i, t; // index and test case
    
    int ir, r; // index and replace char count
    
    char co, cr; // char
    char str[1001]; // main string holder
            
    scanf("%d", &t);
    
    getchar();
    
    for (i = 1; i <= t; i++) {
        scanf("%s", str);
        
        getchar();
        
        scanf("%d", &r);
        
        getchar();
        
        for (ir = 1; ir <= r; ir++) {
            scanf("%c %c", &co, &cr);
            
            getchar();
            
            re(&str, co, cr);
        }
        
        printf("Case #%d: %s\n", i, str);
    }
    
    return 0;
}
