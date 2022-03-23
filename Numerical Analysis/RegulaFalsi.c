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
    float a=0.0,b=0.1,c,x,y,r,f1;
    int n=0; 
    while(f(a)*f(b)>=0)
    {
        a=b;
        b+=0.1;
    }
    while(1)
    {
        f1=b-a;
        if(f1<0.000001)
        {
            break;
        }
        c=(b-((f(b)*(b-a))/(f(b)-f(a))));
        x=f(a);
        y=f(b);
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
      printf("\n Approximate root=> %f (Correct upto 6 decimal!)",c);
}

/* Output

 Total no of iterations=>5
 Approximate root=> 0.619061 (Correct upto 6 decimal!)
*/
