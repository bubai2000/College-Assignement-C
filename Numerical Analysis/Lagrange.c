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
        printf("\n Enter x %d=>",i+1);
        scanf("%f",&x[i]);
        printf("\n Enter y %d =>",i+1);
        scanf("%f",&y[i]);
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

 Enter x 1=>6.54

 Enter y 1 =>2.8156

 Enter x 2=>6.58

 Enter y 2 =>2.8182

 Enter x 3=>6.59

 Enter y 3 =>2.8189

 Enter x 4=>6.61

 Enter y 4 =>2.8202

 Enter x 5=>6.64

 Enter y 5 =>2.8222

 Enter point at which value to be calculated=>6.60

 x1 = 6.540000, y1 = 2.815600
 x2 = 6.580000, y2 = 2.818200
 x3 = 6.590000, y3 = 2.818900
 x4 = 6.610000, y4 = 2.820200
 x5 = 6.640000, y5 = 2.822200
Value at 6.600000 = 2.819566
*/
