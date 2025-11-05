#include <stdio.h>
int main(){
    char s[500];
    printf("Enter a line (including spaces):\n");
    getchar(); // consume newline
    if (!fgets(s, sizeof(s), stdin)) return 0;
    printf("You entered: %s", s);
    return 0;
}
