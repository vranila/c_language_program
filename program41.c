#include <stdio.h>
int main(){
    int x = 10;
    int *p = &x;
    int **pp = &p;
    printf("x = %d\n", x);
    printf("Pointer p points to = %d\n", *p);
    printf("Double pointer pp points to = %d\n", **pp);
    return 0;
}
