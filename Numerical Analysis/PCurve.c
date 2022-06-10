/* Parabolic curve Fitting
MTUG/118/19
*/
#include<stdio.h>
void main()
{
    float x,y,sx=0,sx2=0,sx3=0,sx4=0,sy=0,sxy=0,sx2y=0,a,b,c,w;
    int n;
    printf("Enter no of points=>");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter x %d and y %d =>", i+1,i+1);
        scanf("%f%f",&x,&y);
        sx+=x;
        sx2+=(x*x);
        sx3+=(x*x*x);
        sx4+=(x*x*x*x);
        sy+=y;
        sxy+=(x*y);
        sx2y+=(x*x*y);
    }
    w=n*((sx2*sx4)-(sx3*sx3))-sx*((sx*sx4)-(sx2*sx3))+sx2*((sx*sx3)-(sx2*sx2));
    a=(sy*((sx2*sx4)-(sx3*sx3))+sxy*((sx3*sx2)-(sx*sx4))+sx2y*((sx*sx3)-(sx2*sx2)))/w;
    b=(sy*((sx2*sx3)-(sx*sx4))+sxy*((n*sx4)-(sx2*sx2))+sx2y*((sx*sx2)-(n*sx3)))/w;
    c=(sy*((sx*sx3)-(sx2*sx2))+sxy*((sx*sx2)-(n*sx3))+sx2y*((n*sx2)-(sx*sx)))/w;
    printf("\nThe quadratic equation is=> Y=(%.5f)+(%.5f) X+(%.5f) X^2",a,b,c);
    getchar();
}
/*Output
Enter no of points=>8
Enter x 1 and y 1 =>1 -5
Enter x 2 and y 2 =>2 -12.4
Enter x 3 and y 3 =>3 -15.7
Enter x 4 and y 4 =>4 -15.1
Enter x 5 and y 5 =>5 -10.5
Enter x 6 and y 6 =>6 -1.9
Enter x 7 and y 7 =>7 10.7
Enter x 8 and y 8 =>8 24.4

The quadratic equation is=> Y=(5.25177)+(-12.49701) X+(1.87440) X^2
*/
     
