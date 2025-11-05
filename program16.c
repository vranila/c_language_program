#include <stdio.h>
int main() {
    double k;
    printf("Enter temperature in Celsius: ");
    if (scanf("%lf", &k)!=1) return 0;
    double kelvin = k + 273.15;
    printf("%.2f C = %.2f K\n", k, kelvin);
    return 0;
}
