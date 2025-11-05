#include <stdio.h>
int main(){
    int arr[10], n;
    printf("Enter number of elements (max 10): ");
    if (scanf("%d", &n)!=1) return 0;
    if (n<1 || n>10){ printf("Invalid size\n"); return 0; }
    printf("Enter %d integers:\n", n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int val;
    printf("Enter value to check: ");
    if (scanf("%d", &val)!=1) return 0;
    if (val == arr[0] || val == arr[n-1]) printf("true\n");
    else printf("false\n");
    return 0;
}
