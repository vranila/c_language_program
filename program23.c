#include <stdio.h>
#include <math.h>
int main() {
    long a, n;
    printf("Enter base a and exponent n (positive integers): ");
    if (scanf("%ld %ld", &a, &n)!=2) return 0;
    if (a==0 && n==0) { printf("0^0 undefined\n"); return 0; }
    long long result = 1;
    for (long i=0;i<n;i++) result *= a;
    printf("%ld^%ld = %lld\n", a, n, result);
    return 0;
}
