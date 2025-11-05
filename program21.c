#include <stdio.h>
int main() {
    int y;
    printf("Enter year: ");
    if (scanf("%d", &y)!=1) return 0;
    int leap = (y%4==0 && y%100!=0) || (y%400==0);
    if (leap) printf("%d is a leap year\n", y);
    else printf("%d is not a leap year\n", y);
    return 0;
}
