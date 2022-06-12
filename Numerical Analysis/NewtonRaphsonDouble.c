/* 
Method of Newton-Raphson Double Root
Roll no.: MTUG/118/19
*/
#include<stdio.h>
#include<math.h>
float f(float x)
{
    return (pow(x,2)-(2*pow(2,0.5)*x)+2);
}
float fd(float x)
{
    return ((2*x)-(2*pow(2,0.5)));
}
void main()
{
    float a=0,x=0,f1;
    int n=0; 
    // x=(a-((2*f(a))/(fd(a))));
    do
    {
        a=x;
        x=(a-((2*(f(a)))/(fd(a))));
        n++;
    }while((fabs(x-a))<0.000001);
    printf("\n Total no of iterations=>%d",n);
    printf("\n Approximate double root=> %f (Correct upto 6 decimal!)",x);
}

/* Output

 Total no of iterations=>4
 Approximate double root=> 1.414214 (Correct upto 6 decimal!)
*/
