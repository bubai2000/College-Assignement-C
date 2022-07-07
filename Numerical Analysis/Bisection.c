/* 
Bisection Method
Roll no.: MTUG/118/19
*/
#include<stdio.h>
#include<math.h>
float f(float x)
{
    return (cos(x)-x*exp(x));
}
void main()
{
    float a,b,c,x,y,r,n; 
    printf("\n Enter upper limit, lower limit, tolerence=>");
    scanf("%f%f%f",&b,&a,&n);
    while(fabs(a-b)>n)
    {
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
      }
      printf("\n\n Approximate root=> %f",c);
}

/* Output
 Enter upper limit, lower limit, no of tries=>1 -1 20


 Root exists in Right half!
 New a=0.000000, New b=1.000000

 Root exists in Right half!
 New a=0.500000, New b=1.000000

 Root exists in Left half!
 New a=0.500000, New b=0.750000

 Root exists in Left half!
 New a=0.500000, New b=0.625000

 Root exists in Right half!
 New a=0.562500, New b=0.625000

 Root exists in Right half!
 New a=0.593750, New b=0.625000

 Root exists in Right half!
 New a=0.609375, New b=0.625000

 Root exists in Right half!
 New a=0.617188, New b=0.625000

 Root exists in Left half!
 New a=0.617188, New b=0.621094

 Root exists in Left half!
 New a=0.617188, New b=0.619141

 Root exists in Right half!
 New a=0.618164, New b=0.619141

 Root exists in Right half!
 New a=0.618652, New b=0.619141

 Root exists in Right half!
 New a=0.618896, New b=0.619141

 Root exists in Right half!
 New a=0.619019, New b=0.619141

 Root exists in Left half!
 New a=0.619019, New b=0.619080

 Root exists in Right half!
 New a=0.619049, New b=0.619080

 Root exists in Left half!
 New a=0.619049, New b=0.619064

 Root exists in Right half!
 New a=0.619057, New b=0.619064

 Root exists in Right half!
 New a=0.619061, New b=0.619064

 Root exists in Left half!
 New a=0.619061, New b=0.619062

 Approximate root=> 0.619062
 */
