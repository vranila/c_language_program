#include <stdio.h>
int main() {
    double u, t, a;
    printf("Enter initial velocity u, time t and acceleration a: ");
    if (scanf("%lf %lf %lf", &u, &t, &a)!=3) return 0;
    double s = u*t + 0.5*a*t*t;
    printf("Distance traveled = %.4f\n", s);
    return 0;
}
