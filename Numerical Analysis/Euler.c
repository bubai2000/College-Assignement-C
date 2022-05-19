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
    float x0=0,xn=0.4,h=0.2,y0=1.0;
    int n,i;
    n=(int)((xn-x0)/h);
    for(i=0;i<n;i++)
    {
        y0+=h*f(x0,y0);
        x0+=h;
        printf("\n y(%0.1f)=%0.4f",x0,y0);
    }
    getchar();
}
/* Output

 y(0.2)=1.0000
 y(0.4)=1.0158

*/
