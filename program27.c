#include <stdio.h>
int main(){
    int n;
    printf("Enter array size: ");
    if (scanf("%d", &n)!=1) return 0;
    int arr[n];
    printf("Enter %d integers:\n", n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    long posSum=0, negSum=0;
    for(int i=0;i<n;i++){
        if (arr[i] >= 0) posSum += arr[i];
        else negSum += arr[i];
    }
    printf("Sum of positive elements = %ld\nSum of negative elements = %ld\n", posSum, negSum);
    return 0;
}
