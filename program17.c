#include <stdio.h>
int main() {
    int n;
    printf("Enter integer: ");
    if (scanf("%d", &n)!=1) return 0;
    if (n % 3 == 0) printf("%d is divisible by 3\n", n);
    else printf("%d is not divisible by 3\n", n);
    return 0;
}
