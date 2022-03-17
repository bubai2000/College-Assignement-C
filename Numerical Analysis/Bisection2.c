/* 
Bisection Method
Roll no.: MTUG/118/19
*/
#include<stdio.h>
#include<math.h>
float f(float x)
{
    return (exp(x)-(3*x));
}
void main()
{
    float a,b,c,x,y,r,f1;
    int n=0; 
    printf("\n Enter upper limit, lower limit=>");
    scanf("%f%f",&b,&a);
    while(1)
    {
        f1=a-b;
        if(f1<0.000001)
        {
            break;
        }
        c=(a+b)/2;
        x=f(a);
        y=f(c);
        r=x*y;
        if(r<0)
        {
            b=c;
        }
        else
        {
            a=c;
        }
        n++;
      }
      printf("\n Total no of iterations=>%d",n);
      printf("\n Approximate root=> %f",c);
}
