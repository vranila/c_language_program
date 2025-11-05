#include <stdio.h>
int g = 100; // global
void demo(){
    int l = 10; // local
    printf("Global g=%d, local l=%d\n", g, l);
}
int main(){
    demo();
    return 0;
}
