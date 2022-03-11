#include<stdio.h>
#include<math.h>

float f(float x)
{
    return (pow((0.207*sin(x)+cos(x)),0.2));
}

void main()
{
    float a=0.207, b=1,h, sum, I;
    int i,n=26;
    h=(b-a)/n;
    printf("\n Functional values=>");
    printf("\n x=%.6f \t y=%.6f",a,f(a));
    sum+=f(a);
    for(i=1;i<n;i++)
    {
        printf("\n x=%.6f \t y=%.6f",(a+(i*h)),f((a+(i*h))));
        if(i%2==0)
        {
            sum+=(2*f((a+(i*h))));
        }    
        else
        {
            sum+=(4*f((a+(i*h))));
        } 
    }
    printf("\n x=%.6f \t y=%.6f",b,f(b));
    sum+=f(b);
    I=(h/3)*sum;
    printf("\n Result of integration= %.6f",I);
}
