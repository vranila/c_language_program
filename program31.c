#include <stdio.h>
int main(){
    char s[500];
    printf("Enter a string (no spaces): ");
    if (scanf("%499s", s)!=1) return 0;
    printf("You entered: %s\n", s);
    return 0;
}
