#include<stdio.h>
#include<math.h>
float f(float x, float y)
{
    return log10(x+y);
}

void main()
{
    float x0=0,xn=0.4,h=0.2,y;
    int n=(xn-x0)/h,i;
    for(i=0;i<n;i++)
    {
        y=y+h*f(xn,y);
    }
    printf("Result=> %f",y);
}
