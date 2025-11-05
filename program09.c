#include <stdio.h>
int main() {
    double x;
    printf("Enter number: ");
    if (scanf("%lf", &x)!=1) return 0;
    double sq = x * x;
    printf("Square = %.4f\n", sq);
    return 0;
}
