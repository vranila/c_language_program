#include <stdio.h>
int sumUsingPointers(int *x, int *y){ return *x + *y; }
int main(){
    int a,b;
    printf("Enter two integers: ");
    if (scanf("%d %d",&a,&b)!=2) return 0;
    printf("Sum = %d\n", sumUsingPointers(&a,&b));
    return 0;
}
