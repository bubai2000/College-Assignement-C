/* 
Method of Newton-Raphson
Roll no.: MTUG/118/19
*/
#include<stdio.h>
#include<math.h>
float u(float x, float y)
{
    return (pow(x,4)-(6*pow(x,2)*pow(y,2))+pow(y,4)+pow(x,3)-3*x*pow(y,2)+5*pow(x,2)-5*pow(y,2)+4*x+4);
}
float v(float x, float y)
{
    return (4*pow(x,3)*y-4*x*pow(y,3)+3*pow(x,2)*y-pow(y,3)+10*x*y+4*y);
}
float ux(float x, float y)
{
    return (4*pow(x,3)-12*x*pow(y,2)+3*pow(x,2)-3*pow(y,2)+10*x+4);
}
float uy(float x, float y)
{
    return (-12*pow(x,2)*y+4*pow(y,3)-6*x*y-10*y);
}
void main()
{
    float a=0.0,b=0.0,x=0.1,y=0.1;
    int n=1;
    while(1)
    {
        a=x;
        b=y;
        x=(x-((u(a,b)*ux(a,b))-v(a,b)*uy(a,b))/(pow(ux(a,b),2)+pow(uy(a,b),2)));
        y=(y-((v(a,b)*ux(a,b))+u(a,b)*uy(a,b))/(pow(ux(a,b),2)+pow(uy(a,b),2)));
        printf("\n New guess=> f +i %f",a,b);
        if((fabs(x-a))<0.000001 || (fabs(y-b))<0.000001)
        {
            break;
        }
        n++;
      }
      printf("\n Total no of iterations=>%d",n);
      printf("\n Approximate root=> %f + i%f (Correct upto 6 decimal!)",a,b);
}

/* Output
New guess=> f +i 0.100000
 New guess=> f +i -0.762946
 New guess=> f +i 0.043808
 New guess=> f +i -0.533715
 New guess=> f +i -0.485625
 New guess=> f +i -0.500049
 New guess=> f +i -0.500000
 Total no of iterations=>7
 Approximate root=> -0.500000 + i0.866025 (Correct upto 6 decimal!)
*/