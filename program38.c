#include <stdio.h>
int main(){
    int n;
    printf("Enter array size: ");
    if (scanf("%d",&n)!=1) return 0;
    int arr[n];
    printf("Enter elements:\n");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Access via pointer:\n");
    int *p = arr;
    for(int i=0;i<n;i++) printf("%d ", *(p+i));
    printf("\n");
    return 0;
}
