#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two integers (a b): ");
    if (scanf("%d %d", &a, &b)!=2) return 0;
    printf("Before swap: a=%d b=%d\n", a, b);
    int temp = a; a = b; b = temp;
    printf("After swap: a=%d b=%d\n", a, b);
    return 0;
}
