#include <stdio.h>
/* Demonstrate categories: void, return with args, return without args, etc. */
void noArgNoReturn()
{ 
    printf("No arg, no return\n"); 
}
int withArgWithReturn(int a)
{
     return a*2; 
}
int withNoArgWithReturn()
{ 
    return 42; 
}
void withArgNoReturn(int x)
{ 
    printf("Arg no return: %d\n", x); 
}
int main(){
    noArgNoReturn();
    printf("withArgWithReturn(5)=%d\n", withArgWithReturn(5));
    printf("withNoArgWithReturn()=%d\n", withNoArgWithReturn());
    withArgNoReturn(10);
    return 0;
}
