#include <stdio.h>
int main() {
    int n;
    printf("Enter n: ");
    if (scanf("%d", &n)!=1) return 0;
    long sum = 0;
    for (int i=1;i<=n;i++) sum += (long)i*i;
    printf("Sum of squares of first %d natural numbers = %ld\n", n, sum);
    return 0;
}
