#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n,i,j,z,t,o=0,e=0;
    scanf("%d",&n);
    int odd[n],even[n];
    
    scanf("%d",&z);
    
    for(i=0;i<n;i++){
        scanf("%d",&t);
        if(t%2==0){
            even[e]=t;
            e=e+1;
        }
        else{
            odd[o]=t;
            o=o+1;
        }
    }
    
    if(z%2==0){
        for(i=0;i<o;i++){
           for(j=0;j<o;j++){
            if(odd[i]+odd[j]==z){
                printf("%d\n",odd[i]);
                printf("%d",odd[j]);
                exit(0);
             }               
           }    
        }
        for(i=0;i<e;i++){
           for(j=0;j<e;j++){
            if(even[i]+even[j]==z){
                printf("%d\n",even[i]);
                printf("%d",even[j]);
                exit(0);
            }
           }
        }
    }
    else{
        for(i=0;i<o;i++){
           for(j=0;j<e;j++){
            if(odd[i]+even[j]==z){
                printf("%d\n",even[i]);
                printf("%d",odd[i]);
                exit(0);
             }               
           }    
        }
    }
    printf("*");
    return 0;
}