#include <stdio.h>
int main(){
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n)!=1) return 0;
    int arr[n];
    printf("Enter %d integers:\n", n);
    for(int i=0;i<n;i++) scanf("%d", &arr[i]);
    printf("Array elements:\n");
    for(int i=0;i<n;i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
