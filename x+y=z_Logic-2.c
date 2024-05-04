#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,z,i,j;
    scanf("%d",&n);
    int a[n];
    scanf("%d",&z);
    for(i=0;i<n;i++){
       scanf("%d",&a[i]); 
        for(j=0;j<i;j++){
            if(a[i]+a[j]==z){
                printf("%d\n%d",a[j],a[i]);
                exit(0);
            }
        }
    }
    printf("*");
    return(0);
}