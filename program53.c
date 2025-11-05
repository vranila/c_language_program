#include <stdio.h>
/* Demonstrate preprocessor conditional compilation */
int main(){
#ifdef DEBUG
    printf("DEBUG is defined\n");
#else
    printf("DEBUG is not defined\n");
#endif
    return 0;
}
