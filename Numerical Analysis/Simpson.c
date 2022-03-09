#include<stdio.h>

float f(float x)  // Enter function of your choice
{
    return x*x;
}

void main()
{
    int i,n;
    float a,b,h,x,sum=0,result=0;
    printf("Enter upper limit, lower limit, no of subintervals=>");
    scanf("%f%f%d",&b,&a,&n);
    h=(b-a)/n;
    printf("\n Length of each subinterval= %.3f",h);
    printf("\n Values of y=>");
    printf("\n x=%.3f \t y=%f",a,f(a));
    for(i=1;i<n;i++)
    {
        x=a+(i*h);
        if(i%2==0)
        {
            sum+=(2*f(x));
        }
        else
        {
            sum+=(4*f(x));
        }
        printf("\n x=%.3f \t y=%f",x,f(x));
    }
    printf("\n x=%.3f \t y=%f",b,f(b));
    result=(h/3)*(f(a)+f(b)+sum);
    printf("\n Result of integration = %f",result);
}