#include <stdio.h>
int main() {
    long num;
    printf("Enter an integer: ");
    if (scanf("%ld", &num)!=1) return 0;
    num = llabs(num);
    int lastTwo = num % 100;
    printf("Last two digits = %02d\n", lastTwo);
    return 0;
}
