#include <stdio.h>
#include <string.h>
int main(){
    char s[500];
    char ch;
    printf("Enter a string: ");
    getchar();
    fgets(s, sizeof(s), stdin);
    printf("Enter character to search: ");
    if (scanf(" %c", &ch)!=1) return 0;
    int count=0;
    for (int i=0; s[i]; i++) if (s[i]==ch) count++;
    printf("Occurrence of '%c' = %d\n", ch, count);
    return 0;
}
