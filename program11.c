#include <stdio.h>
int main() {
    int a,b;
    printf("Enter dividend and divisor: ");
    if (scanf("%d %d", &a, &b)!=2) return 0;
    if (b==0) { printf("Divisor cannot be zero\n"); return 0; }
    int rem = a % b;
    printf("Remainder = %d\n", rem);
    return 0;
}
