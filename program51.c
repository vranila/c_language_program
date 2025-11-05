#include <stdio.h>
long factorial(long n){
    if (n<=1) return 1;
    return n * factorial(n-1);
}
int main(){
    int n;
    printf("Enter n: ");
    if (scanf("%d",&n)!=1) return 0;
    if (n < 0) { printf("Factorial undefined for negative\n"); return 0; }
    printf("Factorial of %d = %ld\n", n, factorial(n));
    return 0;
}
