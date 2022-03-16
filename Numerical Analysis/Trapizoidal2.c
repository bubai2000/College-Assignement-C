/* 
Calculating an integration using Trapizoidal rule
Roll no.: MTUG/118/19
*/
#include<stdio.h>
#include<math.h>

float f(float x)
{
    return (sqrt(1-(0.162*(pow(sin(x),2)))));
}

void main()
{
    float a, b,h, sum, I;
    int i,n=24;
    a=(M_PI*20)/180;
    b=(M_PI*50)/180;
    h=(b-a)/n;
    printf("\n Functional values=>");
    printf("\n x=%.6f \t y=%.6f",a,f(a));
    sum+=f(a);
    for(i=1;i<n;i++)
    {
        printf("\n x=%.6f \t y=%.6f",(a+(i*h)),f((a+(i*h))));
        sum+=(2*f((a+(i*h)))); 
    }
    printf("\n x=%.6f \t y=%.6f",b,f(b));
    sum+=f(b);
    I=(h/2)*sum;
    printf("\n Result of integration= %.6f",I);
}

/* Output
Functional values=>
 x=0.349066 	 y=0.990479
 x=0.370882 	 y=0.989303
 x=0.392699 	 y=0.988067
 x=0.414516 	 y=0.986774
 x=0.436332 	 y=0.985427
 x=0.458149 	 y=0.984027
 x=0.479966 	 y=0.982578
 x=0.501782 	 y=0.981082
 x=0.523599 	 y=0.979541
 x=0.545415 	 y=0.977958
 x=0.567232 	 y=0.976336
 x=0.589049 	 y=0.974678
 x=0.610865 	 y=0.972987
 x=0.632682 	 y=0.971266
 x=0.654498 	 y=0.969518
 x=0.676315 	 y=0.967746
 x=0.698132 	 y=0.965953
 x=0.719948 	 y=0.964143
 x=0.741765 	 y=0.962320
 x=0.763582 	 y=0.960486
 x=0.785398 	 y=0.958645
 x=0.807215 	 y=0.956800
 x=0.829031 	 y=0.954956
 x=0.850848 	 y=0.953115
 x=0.872665 	 y=0.951280
 Result of integration= 0.509082
*/
