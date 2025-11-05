#include <stdio.h>
#include <math.h>

int factorial(int x){
    int f=1;
    for(int i=1;i<=x;i++) f*=i;
    return f;
}

int main(){
    int n, temp, sum=0;
    printf("Enter a positive integer: ");
    if (scanf("%d", &n)!=1) return 0;
    temp = n;
    while(temp>0){
        int d = temp%10;
        sum += factorial(d);
        temp /= 10;
    }
    if (sum == n) printf("%d is a strong number\n", n);
    else printf("%d is not a strong number\n", n);
    return 0;
}
