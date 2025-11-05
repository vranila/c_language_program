#include <stdio.h>
#include <math.h>
int main() {
    double r;
    printf("Enter radius: ");
    if (scanf("%lf", &r)!=1) return 0;
    double area = M_PI * r * r;
    double circ = 2 * M_PI * r;
    printf("Area = %.4f\nCircumference = %.4f\n", area, circ);
    return 0;
}
