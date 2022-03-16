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
    float a,b,c,x,y,r;
    int n; 
    printf("\n Enter upper limit, lower limit, no of tries=>");
    scanf("%f%f%d",&b,&a,&n);
    while(n>0)
    {
        c=(a+b)/2;
        x=f(a);
        y=f(c);
        r=x*y;
        if(r<0)
        {
            b=c;
            printf("\n\n Root exists in Left half!");
            printf("\n New a=%f, New c=%f",a,b);
        }
        else
        {
            a=c;
            printf("\n\n Root exists in Right half!");
            printf("\n New a=%f, New c=%f",a,b);
        }
        n--;
      }
      printf("\n\n Approximate root=> %f",c);
}

/* Output
 Enter upper limit, lower limit, no of tries=>0 1 20


 Root exists in Left half!
 New a=1.000000, New c=0.500000

 Root exists in Right half!
 New a=0.750000, New c=0.500000

 Root exists in Right half!
 New a=0.625000, New c=0.500000

 Root exists in Left half!
 New a=0.625000, New c=0.562500

 Root exists in Left half!
 New a=0.625000, New c=0.593750

 Root exists in Left half!
 New a=0.625000, New c=0.609375

 Root exists in Left half!
 New a=0.625000, New c=0.617188

 Root exists in Right half!
 New a=0.621094, New c=0.617188

 Root exists in Right half!
 New a=0.619141, New c=0.617188

 Root exists in Left half!
 New a=0.619141, New c=0.618164

 Root exists in Left half!
 New a=0.619141, New c=0.618652

 Root exists in Left half!
 New a=0.619141, New c=0.618896

 Root exists in Left half!
 New a=0.619141, New c=0.619019

 Root exists in Right half!
 New a=0.619080, New c=0.619019

 Root exists in Left half!
 New a=0.619080, New c=0.619049

 Root exists in Right half!
 New a=0.619064, New c=0.619049

 Root exists in Left half!
 New a=0.619064, New c=0.619057

 Root exists in Left half!
 New a=0.619064, New c=0.619061

 Root exists in Right half!
 New a=0.619062, New c=0.619061

 Root exists in Right half!
 New a=0.619061, New c=0.619061

 Approximate root=> 0.619061
 */
