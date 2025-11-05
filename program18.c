#include <stdio.h>
int main() {
    int marks;
    printf("Enter marks (out of 100): ");
    if (scanf("%d", &marks)!=1) return 0;
    if (marks >= 75) printf("Distinction\n");
    else printf("Not distinction\n");
    return 0;
}
