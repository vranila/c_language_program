#include <stdio.h>
void showSum(int a, int b){ printf("Sum = %d\n", a+b); }
int main(){
    int x,y;
    printf("Enter two ints: ");
    if (scanf("%d %d",&x,&y)!=2) return 0;
    showSum(x,y); // actual arguments x,y; formal arguments in function
    return 0;
}
