#include <stdio.h>
int main(){
    char s[200];
    printf("Enter a string: ");
    getchar();
    fgets(s, sizeof(s), stdin);
    printf("First character: %c\n", s[0]);
    printf("Full string: %s", s);
    return 0;
}
