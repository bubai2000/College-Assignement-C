/* Divided diffrence
Roll no.: MTUG/118/19*/
#include<stdio.h>
#include<math.h>
void main ()
{
	float x[10], d[10][10], sum=0, p=1, x1;
    int n;
    printf("\n Enter no of values given=>");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        printf("\nEnter x%d, y%d=>",i+1,i+1);
        scanf("%f %f",&x[i],&d[0][i]);
    }	
    printf("\nEnter point at which value to be calculated=>");
    scanf("%f",&x1);
    for(int i=1; i<n; i++)
    {
        for(int j=0;j<(n-i);j++)
        {
            d[i][j]=((d[i-1][j+1]-d[i-1][j])/(x[j+i]-x[j]));
        }
    }
    for(int i=0;i<n-1;i++)
    {
        sum+=(d[i][0]*p);
        p*=(x1-x[i]);
    }
    printf("\nY(%f)=%f",x1,sum);
}
/* Output

 Enter no of values given=>5

Enter x1, y1=>1.23 1.2356

Enter x2, y2=>1.26 1.3124

Enter x3, y3=>1.3 1.4215

Enter x4, y4=>1.32 1.4821

Enter x5, y5=>1.35 1.5629

Enter point at which value to be calculated=>1.25

Y(1.250000)=1.286616
*/