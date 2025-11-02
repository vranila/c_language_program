#include <stdio.h>
int main() {
    double miles;
    printf("Enter miles: ");
    if (scanf("%lf", &miles)!=1) return 0;
    double km = miles * 1.60934;
    printf("%.4f miles = %.4f kilometers\n", miles, km);
    return 0;
}
