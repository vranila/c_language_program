#include <stdio.h>
int main() {
    double bal, minBal;
    printf("Enter account balance and minimum balance: ");
    if (scanf("%lf %lf", &bal, &minBal)!=2) return 0;
    if (bal >= minBal) printf("Balance is greater than or equal to minimum balance\n");
    else printf("Balance is less than minimum balance\n");
    return 0;
}
