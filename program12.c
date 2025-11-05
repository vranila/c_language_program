#include <stdio.h>
int main() {
    int minutes;
    printf("Enter minutes: ");
    if (scanf("%d", &minutes)!=1) return 0;
    int hours = minutes / 60;
    int mins = minutes % 60;
    printf("%d minutes = %d hour(s) and %d minute(s)\n", minutes, hours, mins);
    return 0;
}
