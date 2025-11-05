#include <stdio.h>
void swapByValue(int a,int b){ int t=a;a=b;b=t; printf("Inside swapByValue: a=%d b=%d\n", a,b); }
void swapByAddress(int *a,int *b){ int t=*a; *a=*b; *b=t; }
int main(){
    int x,y;
    printf("Enter x and y: ");
    if (scanf("%d %d",&x,&y)!=2) return 0;
    printf("Before: x=%d y=%d\n", x,y);
    swapByValue(x,y);
    printf("After swapByValue (caller): x=%d y=%d\n", x,y);
    swapByAddress(&x,&y);
    printf("After swapByAddress: x=%d y=%d\n", x,y);
    return 0;
}
