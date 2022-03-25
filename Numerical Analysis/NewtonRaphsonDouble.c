/* 
Method of Newton-Raphson Double Root
Roll no.: MTUG/118/19
*/
#include<stdio.h>
#include<math.h>
float f(float x)
{
    return (pow(x,3)+(2*(2-sqrt(2))*pow(x,2))+(2*(1-(4*sqrt(2)))*x)+8);
}
float fd(float x)
{
    return ((3*pow(x,2))+(4*(2-sqrt(2))*x)+(2*(1-(4*sqrt(2)))));
}
void main()
{
    float a=0,x=0,f1;
    int n=0; 
    // x=(a-((2*f(a))/(fd(a))));
    while(1)
    {
        a=x;
        x=(a-((2*(f(a)))/(fd(a))));
        if((fabs(x-a))<0.000001)
        {
            break;
        }
        n++;
      }
      printf("\n Total no of iterations=>%d",n);
      printf("\n Approximate double root=> %f (Correct upto 6 decimal!)",x);
}

/* Output

 Total no of iterations=>4
 Approximate double root=> 1.414214 (Correct upto 6 decimal!)
*/
