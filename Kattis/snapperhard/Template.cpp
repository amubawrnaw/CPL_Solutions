#include<stdio.h>

using namespace std;

int
main() {
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++) {
        int n, k;
        scanf("%d %d", &n, &k);
        printf("Case #%d: %s\n", i, (k & ((1 << n) - 1)) == (1 << n) - 1 ? "ON" : "OFF");
    }
    
    return 0;
}