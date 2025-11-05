#include <stdio.h>
int main(){
    int r,c;
    printf("Enter rows and columns: ");
    if (scanf("%d %d", &r, &c)!=2) return 0;
    int mat[r][c];
    printf("Enter elements row-wise:\n");
    for(int i=0;i<r;i++)
      for(int j=0;j<c;j++)
        scanf("%d",&mat[i][j]);
    printf("Matrix:\n");
    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++) printf("%d ", mat[i][j]);
      printf("\n");
    }
    return 0;
}
