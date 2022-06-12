/* Gauss Jordan Method
Roll no.: MTUG/118/19 */
#include<stdio.h>
#include<math.h>
void main()
{
	int i,j,n,m,k;
	float a[30][30],b[30],t;
	printf("Enter the no of rows of the matrix :\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter the %dth row of the matrix:\n",i);
		for(j=1;j<=n+1;j++)
		{
			scanf("%f",&a[i][j]);
		}
	}
    for(j=01;j<=n;j++)
	{
		for(i=1;i<=n;i++)
		{
			if(i>j)
			{
	
				t=a[i][j]/a[j][j];
				for(k=01;k<=n+1;k++)
				{
					a[i][k]=a[i][k]-a[j][k]*t;
				}
			}
		}
	}
	b[n]=a[n][n+1]/a[n][n];
	for(i=n-1;i>=1;i--)
	{
		float s=0;
		for(j=i+1;j<=n;j++)
		{
			s+=a[i][j]*b[j];
	        b[i]=(a[i][n+1]-s)/a[i][i];
		}
	}
	printf("The solution is:\n");
	for(i=1;i<=n;i++)
	{
		printf("\n x[%d]=%f ",i,b[i]);
	}
}
/*Output
Enter the no of rows of the matrix :
4
Enter the 1th row of the matrix:
2.63 5.21 -1.694 .938 -4.23
Enter the 2th row of the matrix:
3.16 -2.95 .813 -4.21 .716
Enter the 3th row of the matrix:
5.36 1.88 -2.15 -4.95 -1.28
Enter the 4th row of the matrix:
1.34 2.98 -.432 -1.768 -.419
The solution is:

 x[1]=-1.038334
 x[2]=-0.208898
 x[3]=-0.226358
 x[4]=-0.846774
 */