/* 
Runge Kutta 4 Method
Roll no.: MTUG/118/19
*/
#include<stdio.h>
float f(float x,float y)
{
    return (x*x)+(y*y);
}

void main()
{
    float x0=1,y0=0,xn=1.2,h=0.1,k1,k2,k3,k4;
    int n=(int)((xn-x0)/h);
    printf("%d",n);
    for(int i=0;i<n;i++) 
    {
        k1 = h*f(x0,y0);
        k2 = h*f(x0+(h/2),y0+(k1/2));
        k3 = h*f(x0+(h/2),y0+(k2/2));
        k4 = h*f(x0 + h, y0 + k3);
        y0 += ((k1 + 2*k2 + 2*k3 + k4)/6);
        x0+=h;
    }
    printf("\n Value at required point=>%f",y0); 
}

/* Output
 Value at required point=>0.246313
*/
