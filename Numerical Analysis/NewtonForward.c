/* Newton Forward
Roll no.: 118/MTUG/19
*/
#include<stdio.h>
#include<math.h>
int fact(int i)
{
    if(i==0)
    {
        return 1;
    }
    else
    {
        return i*fact(i-1);
    }
}
void main()
{
    float x[6],y[6][6],x1,h,p=1,q=1,sum=0;
    for(int i=0;i<6;i++)
    {
        printf("Enter x %d and y %d=>",i+1,i+1);
        scanf("%f %f",&x[i],&y[0][i]);
    }
    printf("Enter point at which value to be calculated=>");
    scanf("%f",&x1);
    sum=y[0][0];
    h=x[1]-x[0];
    for(int i=1;i<6;i++)
    {
        for(int j=0;j<i;j++)
        {
            y[i][j]=y[i-1][j+1]-y[i-1][j];
        }
    }
    for(int i=1;i<6;i++)
    {
        q=1;
        p*=(x1-x[i-1]);
        q=(y[i][0]*p)/(fact(i)*pow(h,i));
        sum+=q;
    }
    printf("Value at %f = %f", x1, sum);  
}
