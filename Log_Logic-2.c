#include<stdio.h>
#include<math.h>

float Log(int n){
    int c = 2;
    float sum=0;
    //Finding Prime Factors And Then Applying Log 
    while(n > 1){
        if (n % c == 0){
        sum+=log2(c);
        n /= c;
        }
    else
        c++;
    }
return sum;
}

int main()
{
    int n,x;
    float y;
    scanf("%d",&n);
    y=Log(n)/Log(3);
    x=y*pow(10,4);
    y=x/pow(10,4);
    printf("%.4f",y);
return 0;
}