/* Parabolic curve Fitting
MTUG/118/19
*/
#include<stdio.h>
void main()
{
    float x,y,sx=0,sx2=0,sx3=0,sx4=0,sy=0,sxy=0,sx2y=0,a,b,c;
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
    a=(sy*((sx2*sx4)-(sx3*sx3))+sxy*((sx2*sx3)-(sx*sx4))+sx2y*((sx*sx3)-(sx2*sx2)))/(n*((sx2*sx4)-(sx3*sx3))+sx*((sx3*sx2)-(sx*sx4))+sx2*((sx*sx3)-(sx2*sx2)));
    printf("\n a=%f",a);
    getchar();
}
/*Output
Enter no of points=>9
Enter x 1 and y 1 =>0 119
Enter x 2 and y 2 =>1 141
Enter x 3 and y 3 =>2 144
Enter x 4 and y 4 =>3 149
Enter x 5 and y 5 =>4 150
Enter x 6 and y 6 =>5 158
Enter x 7 and y 7 =>6 161
Enter x 8 and y 8 =>7 166
Enter x 9 and y 9 =>8 170


The line is Y=129.422226 +5.366667 X
*/
     
