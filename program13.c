#include <stdio.h>
int main() {
    double l,w;
    printf("Enter length and width: ");
    if (scanf("%lf %lf", &l, &w)!=2) return 0;
    double perimeter = 2*(l+w);
    printf("Perimeter of rectangle = %.4f\n", perimeter);
    return 0;
}
