#include<stdio.h>
#include<math.h>

float f(float x)
{
    return (pow(x,2));
}
float simp(float y)
{
    float a=0,b=0.4,h,sum=0,I;
    int n=24;
    h=(b-a)/n;
    printf("\n y=%f",y);
    sum+=f(a);
    for(int i=1;i<n;i++)
    {
        if(i%2==0)
        {
            sum+=(2*f((a+(i*h))));
        }    
        else
        {
            sum+=(4*f((a+(i*h))));
        } 
    }
    sum+=f(b);
    I=(h/3)*sum;
    I+=(0.4*y);
    return I;
}
void main()
{
    float y0=1,y=0;
    y=y0+simp(y0);
    for(int i=0;i<3;i++)
    {
        y=y0+simp(y);
        printf("\n y= %f",y);
    }
    printf("\n Result=%f",y);
}
