/* 
Method of Regula-Falsi
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
    c=(b-((f(b)*(b-a))/(f(b)-f(a))));
    x=f(a);
    y=f(b);
    r=x*y;
    n--;
    if(r<0)
        {
            b=c;
            printf("\n\n Root exists in Left half!");
            printf("\n New a=%f, New b=%f",a,b);
        }
        else
        {
            a=c;
            printf("\n\n Root exists in Right half!");
            printf("\n New a=%f, New b=%f",a,b);
        }
    while(n>0)
    {
        c=(b-((f(b)*(b-a))/(f(b)-f(a))));
        x=f(a);
        y=f(b);
        r=x*y;
        if(r<0)
        {
            b=c;
            printf("\n New a=%f, New b=%f",a,b);
        }
        else
        {
            a=c;
            printf("\n New a=%f, New b=%f",a,b);
        }
        n--;
      }
      printf("\n\n Approximate root=> %f",c);
}

/* Output
 Enter upper limit, lower limit, no of tries=>1 -2 20


 Root exists in Left half!
 New a=-2.000000, New b=0.868296
 New a=-2.000000, New b=0.768116
 New a=-2.000000, New b=0.702637
 New a=-2.000000, New b=0.664061
 New a=-2.000000, New b=0.642732
 New a=-2.000000, New b=0.631355
 New a=-2.000000, New b=0.625403
 New a=-2.000000, New b=0.622321
 New a=-2.000000, New b=0.620734
 New a=-2.000000, New b=0.619919
 New a=-2.000000, New b=0.619501
 New a=-2.000000, New b=0.619286
 New a=-2.000000, New b=0.619177
 New a=-2.000000, New b=0.619120
 New a=-2.000000, New b=0.619092
 New a=-2.000000, New b=0.619077
 New a=-2.000000, New b=0.619069
 New a=-2.000000, New b=0.619065
 New a=-2.000000, New b=0.619063
 New a=-2.000000, New b=0.619062

 Approximate root=> 0.619062
 */
