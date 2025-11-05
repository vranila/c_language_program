#include <stdio.h>
#include <stdlib.h> // for abs()

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int digit = abs(num % 10);
    printf("The ones digit is: %d\n", digit);

    return 0;
}
