#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,x;
    float y;
    scanf("%d",&n);
    y=log10(n)/log10(3);
    x=y*pow(10,4);
    y=x/pow(10,4);
    printf("%.4f",y);
    return 0;
}