/* 
Lagrange Interpolation
Roll no.: MTUG/118/19
*/
#include<stdio.h>
#include<math.h>
void main()
{
    float x[5],y[5],x1,p=1,q=1,r,sum=0;
    for(int i=0;i<5;i++)
    {
        printf("\n Enter x %d, y %d =>",i+1,i+1);
        scanf("%f %f",&x[i],&y[i]);
    }
    printf("\n Enter point at which value to be calculated=>");
    scanf("%f",&x1);
    for(int i=0;i<5;i++)
    {
        printf("\n x%d = %f, y%d = %f",i+1,x[i],i+1,y[i]);
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i!=j)
            {
               q=q*(x[i]-x[j]); 
               p=p*(x1-x[j]);
            }
        }
        r=p/q;
        sum=sum+(r*y[i]);
        p=1;
        q=1;
    }
    printf("\nValue at %f = %f",x1,sum);
}
/* Output

 Enter x 1, y 1 =>93.0 11.38

 Enter x 2, y 2 =>96.2 12.80

 Enter x 3, y 3 =>100.0 14.70

 Enter x 4, y 4 =>104.2 17.07

 Enter x 5, y 5 =>108.7 19.91

 Enter point at which value to be calculated=>102

 x1 = 93.000000, y1 = 11.380000
 x2 = 96.199997, y2 = 12.800000
 x3 = 100.000000, y3 = 14.700000
 x4 = 104.199997, y4 = 17.070000
 x5 = 108.699997, y5 = 19.910000
Value at 102.000000 = 15.793631
*/
