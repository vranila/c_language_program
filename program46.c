#include <stdio.h>
float add(float a,float b){ return a+b; }
float subf(float a,float b){ return a-b; }
float mul(float a,float b){ return a*b; }
float divf(float a,float b){ return b==0?0:a/b; }
int main(){
    float x,y;
    printf("Enter two floats: ");
    if (scanf("%f %f",&x,&y)!=2) return 0;
    printf("Add=%.4f\nSub=%.4f\nMul=%.4f\nDiv=%.4f\n", add(x,y), subf(x,y), mul(x,y), divf(x,y));
    return 0;
}
