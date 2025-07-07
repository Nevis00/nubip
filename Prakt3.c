#include <stdio.h>
int main() {
    int p;
    scanf("%d", &p);
    long long a[31] = {0}, b[31] = {0};  
    a[1] = 2; 
    b[1] = 0;
    for (int i = 2; i <= p; i++) {
        a[i] = 2 * (a[i-1] + b[i-1]);
        b[i] = a[i-1];
    }
    long long total = a[p] + b[p];
    printf("%lld\n", total);
    return 0;
}
