#include <stdio.h>
int sum(int a,int b){ return a+b; }
int main(){
    int a,b;
    printf("Enter two integers: ");
    if (scanf("%d %d",&a,&b)!=2) return 0;
    printf("Sum = %d\n", sum(a,b));
    return 0;
}
