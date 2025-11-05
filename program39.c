#include <stdio.h>
int main(){
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d",&n)!=1) return 0;
    int arr[n];
    printf("Enter elements:\n");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int *p = arr;
    printf("Reverse order:\n");
    for(int i=n-1;i>=0;i--) printf("%d ", *(p+i));
    printf("\n");
    return 0;
}
