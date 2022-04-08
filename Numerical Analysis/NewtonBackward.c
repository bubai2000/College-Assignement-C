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
        printf("\n Enter x %d=>",i+1);
        scanf("%f",&x[i]);
        printf("\n Enter y %d =>",i+1);
        scanf("%f",&y[0][i]);
    }
    printf("Enter point at which value to be calculated=>");
    scanf("%f",&x1);
    sum=y[0][5];
    h=x[1]-x[0];
    for(int i=1;i<6;i++)
    {
        for(int j=i;j<=6;j++)
        {
            y[i][j]=y[i-1][j]-y[i-1][j-1];
        }
    }
    for(int i=1;i<6;i++)
    {
        q=1;
        p*=(x1-x[6-i]);
        q=(y[i][5]*p)/(fact(i)*pow(h,i));
        sum+=q;
    }
    printf("Value at %f = %f", x1, sum);  
}
/* Output

 Enter x 1=>45

 Enter y 1 =>1

 Enter x 2=>46

 Enter y 2 =>1.03553

 Enter x 3=>47

 Enter y 3 =>1.07237

 Enter x 4=>48

 Enter y 4 =>1.11061

 Enter x 5=>49

 Enter y 5 =>1.15037

 Enter x 6=>50

 Enter y 6 =>1.19175
Enter point at which value to be calculated=>49.6
Value at 49.599998 = 1.174999
*/