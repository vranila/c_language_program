#include <stdio.h>
int main() {
    double a,b;
    printf("Enter two numbers: ");
    if (scanf("%lf %lf", &a, &b)!=2) return 0;
    double prod = a * b;
    printf("Product = %.4f\n", prod);
    return 0;
}
