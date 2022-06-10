/* Linear curve Fitting
MTUG/118/19
*/
#include<stdio.h>
void main()
{
    float x[20],y[20],sx=0,sy=0,sxy=0,sx2=0,a,b;
    int n;
    printf("Enter no of points=>");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter x %d and y %d =>", i+1,i+1);
        scanf("%f%f",&x[i],&y[i]);
        sx+=x[i];
        sy+=y[i];
        sxy+=(x[i]*y[i]);
        sx2+=(x[i]*x[i]);
    }
    b=((sx*sy)-(n*sxy))/((sx*sx)-(n*sx2));
    a=((sy-(b*sx))/n);
    printf("\n\nThe line is Y=%f +%f X",a,b);
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
     
