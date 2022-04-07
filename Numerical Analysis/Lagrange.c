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
        printf("\n x %f, y %f =>",x[i],y[i]);
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i!=j)
            {
               q=q*(x[i]-x[j]); 
            }
            p=p*(x1-x[j]);
        }
        r=p/q;
        printf("\n r=%f, r*yi=%f",r,r*y[i]);
        sum=sum+(r*y[i]);
        p=1;
        q=1;
        printf("\nSum=%f",sum);
    }
    printf("\nValue at %f = %f",x1,sum);
}

