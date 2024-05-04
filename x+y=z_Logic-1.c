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
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]+a[j]==z){
                printf("%d\n%d",a[i],a[j]);
                exit(0);
            }
        }
    }
    printf("*");
    return(0);
}
