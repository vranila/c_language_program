#include <stdio.h>
int main(){
    int r1,c1,r2,c2;
    printf("Enter rows and cols for matrix A: ");
    if (scanf("%d %d", &r1, &c1)!=2) return 0;
    printf("Enter rows and cols for matrix B: ");
    if (scanf("%d %d", &r2, &c2)!=2) return 0;
    if (c1 != r2) { printf("Matrix multiplication not possible (c1 != r2)\n"); return 0; }
    int A[r1][c1], B[r2][c2], C[r1][c2];
    printf("Enter A elements:\n");
    for(int i=0;i<r1;i++) for(int j=0;j<c1;j++) scanf("%d",&A[i][j]);
    printf("Enter B elements:\n");
    for(int i=0;i<r2;i++) for(int j=0;j<c2;j++) scanf("%d",&B[i][j]);
    for(int i=0;i<r1;i++) for(int j=0;j<c2;j++){ C[i][j]=0; for(int k=0;k<c1;k++) C[i][j]+=A[i][k]*B[k][j]; }
    printf("Product matrix:\n");
    for(int i=0;i<r1;i++){ for(int j=0;j<c2;j++) printf("%d ", C[i][j]); printf("\n"); }
    return 0;
}
