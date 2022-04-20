#include<stdio.h>
#include<math.h>

float f(float x, float y)
{
    return (1+(x*y));
}
float simp(float y, float b)
{
    float a=0,h,sum=0,I;
    int n=24;
    h=(b-a)/n;
    sum+=f(a,y);
    for(int i=1;i<n;i++)
    {
        if(i%2==0)
        {
            sum+=(2*f((a+(i*h)),y));
        }    
        else
        {
            sum+=(4*f((a+(i*h)),y));
        } 
    }
    sum+=f(b,y);
    I=(h/3)*sum;
    return I;
}
void main()
{
    float y0=2,y=0;
    y=y0+simp(y0,0.1);
    for(int i=1;i<=3;i++)
    {
        y=y0+simp(y,0.1);
    }
    printf("\n f(0.1)=%f",y);
    
    y=y0+simp(y0,0.2);
    for(int i=1;i<=3;i++)
    {
        y=y0+simp(y,0.2);
    }
    printf("\n f(0.2)=%f",y);

    y=y0+simp(y0,0.3);
    for(int i=1;i<=3;i++)
    {
        y=y0+simp(y,0.3);
    }
    printf("\n f(0.3)=%f",y);
}
