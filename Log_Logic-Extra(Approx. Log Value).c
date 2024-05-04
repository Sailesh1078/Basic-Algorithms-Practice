//Using The Riemann Integral

#include <stdio.h>
#include <math.h>

float Log(int n)
{
 float f1(float x);
 float s1 = 0;
 int N=1280100;
 float a=1,b=n;
 int i;  
 for(i=1; i<=N;i++)
 {
  s1 = s1 + f1(a+((b-a)/N)*i)*((b-a)/N);
 }
return s1;
}
/* y=1/x */
float f1(float x)
{
 float y=0;
 y = 1 / x;
 return y;
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