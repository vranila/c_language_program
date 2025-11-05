#include <stdio.h>
void fibRec(int n, int a, int b){
    if (n==0) return;
    printf("%d ", a);
    fibRec(n-1, b, a+b);
}
int main(){
    int n;
    printf("Enter number of terms: ");
    if (scanf("%d",&n)!=1) return 0;
    if (n<=0){ printf("No terms\n"); return 0; }
    fibRec(n, 0, 1);
    printf("\n");
    return 0;
}
