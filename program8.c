#include <stdio.h>
int main() {
    long num;
    printf("Enter an integer: ");
    if (scanf("%ld", &num)!=1) return 0;
    int digit = abs((int)(num % 10));
    printf("Digit at ones place = %d\n", digit);
    return 0;
}
