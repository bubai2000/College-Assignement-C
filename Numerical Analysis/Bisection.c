/* 
Bisection Method
Roll no.: MTUG/118/19
*/
#include<stdio.h>
#include<math.h>
float f(float x)
{
    return (pow(M_E,x)-(3*x));
}
void main()
{
    float a,b,c,x,y,r;
    int n; 
    printf("\n Enter upper limit, lower limit, no of tries=>");
    scanf("%f%f%d",&b,&a,&n);
    while(n>0)
    {
        c=(a+b)/2;
        x=f(a);
        y=f(b);
        r=x*y;
        if(r<0)
        {
            printf("\n a=%f,b=%f",a,b);
            b=c;
        }
        else
        {
            printf("\n a1=%f,b1=%f",a,b);
            a=c;
        }
        n--;
      }
      printf("\n Approximate root=> %f",c);
}
