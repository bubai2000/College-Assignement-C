#include<stdio.h>
float f(float x,float y)
{
    return (x*x)+(y*y);
}

void main()
{
    float x0=1,y0=0,h=0.2,k1,k2,k3,k4,y;
    k1 =f(x0,y0);
    k2 = h*f(x0+(h/2),y0+(k1/2));
    k3 = h*f(x0+(h/2),y0+(k2/2));
    k4 = h*f(x0 + h, y0 + k3);
    y  = y0 + (k1 + 2*k2 + 2*k3 + k4)/6;
    printf("\n Value at required point=>%f",y); 
    getchar();
}
