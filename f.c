#include<stdio.h>
#include<math.h>
void f(float x)
{
    float r;
    if(x>=0 && x<2)
    {
        r= pow(x,2)+sin(x);
    }
    else if(x>=2 && x<=4)
    {
        r=2*cos(x)-1;
    }
    printf("\n Value of f(x) when x = %.1f is = %f", x, r);
}
void main()
{
    int i;
    float a[]={0.2,1.8,2.0,2.5,3.5};
    for(i=0;i<5;i++)
    {
        f(a[i]);
    }
}