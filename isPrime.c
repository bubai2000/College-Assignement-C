#include<stdio.h>
void prime(int x)
{
    int i,f=1;
    for(i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
            f=0;
            break;
        }
    }
    if(f==1)
    {
        printf("\n %d",x);
    }
}
void main()
{
    int i;
    printf("Prime numbers in range 131 to 291 are=>");
    for(i=131;i<=291;i++)
    {
        prime(i);
    }
}