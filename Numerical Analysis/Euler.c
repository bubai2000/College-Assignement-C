/* 
Euler Method
Roll no.: MTUG/118/19
*/
#include<stdio.h>
#include<math.h>
float f(float x, float y)
{
    return log10(x+y);
}

void main()
{
    float x0=0,xn=0.4,h=0.2,y,x;
    int n=(xn-x0)/h,i;
    for(i=0;i<n;i++)
    {
        y=y+h*f(xn,y);
        x=x0+(i+1)*h;
        printf("\n y(%0.1f)=%0.4f",x,y);
    }
    getchar();
}
/* Output
 y(0.2)=-0.0796
 y(0.4)=-0.1784
*/
