/* 
Method of Newton-Raphson
Roll no.: MTUG/118/19
*/
#include<stdio.h>
#include<math.h>
float f(float x)
{
    return (exp(x)-(3*x));
}
float fd(float x)
{
    return (exp(x)-3);
}
void main()
{
    float a=0.0,x=0.0,f1;
    int n=0; 
    // x=(a-((f(a))/(fd(a))));
    while(1)
    {
        a=x;
        x=(a-((f(a))/(fd(a))));
        if((fabs(x-a))<0.000001)
        {
            break;
        }
        n++;
      }
      printf("\n Total no of iterations=>%d",n);
      printf("\n Approximate root=> %f (Correct upto 6 decimal!)",x);
}

/* Output
Total no of iterations=>4
 Approximate root=> 0.619061 (Correct upto 6 decimal!)
*/
