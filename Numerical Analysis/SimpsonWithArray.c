#include<stdio.h>

float f(float x)  // Enter function of your choice
{
    return x*x;
}

void main()
{
    int i,n;
    float a,b,h,x[50],y[50],sum=0,result=0;
    printf("Enter upper limit, lower limit, no of subintervals=>");
    scanf("%f%f%d",&b,&a,&n);
    h=(b-a)/n;
    printf("\n Length of each subinterval= %f",h);
    printf("\n Values of y=>");
    for(i=0;i<=n;i++)
    {
        x[i]=a+(i*h);
        y[i]=f(x[i]);
        printf("\n x=%.3f \t y=%f",x[i],y[i]);
    }
    for(i=1;i<n;i++)
    {
        if(i%2==0)
        {
            sum+=(2*y[i]);
        }
        else
        {
            sum+=(4*y[i]);
        }
    }
    result=(h/3)*(y[0]+y[n]+sum);
    printf("\n Result of integration = %f",result);
}