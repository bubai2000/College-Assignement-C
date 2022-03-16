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
 
 */
