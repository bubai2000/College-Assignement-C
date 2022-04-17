#include<stdio.h>
#include<math.h>

float f(float x, float y)
{
    return (pow(x,2)+pow(y,2));
}
float simp(float y)
{
    float a=0,b=0.4,h,sum=0;
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
    return sum;
}
void main()
{
    float y0=1,y=0;
    y=y0+simp(y0);
    for(int i=0;i<3;i++)
    {
        y=y0+simp(y);
    }
    printf("Result=%f",y);
}
