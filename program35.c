#include <stdio.h>
int main(){
    int r,c;
    printf("Enter rows and cols of matrix: ");
    if (scanf("%d %d",&r,&c)!=2) return 0;
    int A[r][c];
    printf("Enter elements:\n");
    for(int i=0;i<r;i++) for(int j=0;j<c;j++) scanf("%d",&A[i][j]);
    printf("Transpose:\n");
    for(int j=0;j<c;j++){
      for(int i=0;i<r;i++) printf("%d ", A[i][j]);
      printf("\n");
    }
    return 0;
}
