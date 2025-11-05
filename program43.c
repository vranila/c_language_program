#include <stdio.h>

/* Declaration */
void sayHello(void);

/* main */
int main(){
    sayHello();
    return 0;
}

/* Definition outside main */
void sayHello(void){
    printf("Hello — function declared before main and defined after.\n");
}
