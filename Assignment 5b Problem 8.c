/* Assignment 5b Problem 8: Matrix Multiplication
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
	int i,j,n,m,p,k,q;
	float a[30][30],b[30][30],s=0;
	printf("Enter the size of the rows and columns of the first matrix=>\n");
	scanf("%d%d",&m,&n);
	printf("Enter the size of the rows and columns of the second matrix=>\n");
	scanf("%d%d",&p,&q);
	if(n==p)
	{

		printf("Matrix multiplication is possible\n");
		printf("Enter the entries of the first matrix=>\n");
		for(i=0;i<m;i++)
		{
			printf("Enter entries of row %d=>\n",i+1);
			for(j=0;j<n;j++)
			{
				scanf("%f",&a[i][j]);
			}
		}
		printf("Enter the entries of the second matrix=>\n");
		for(i=0;i<p;i++)
		{
			printf("Enter entries of row %d=>\n",i+1);
			for(j=0;j<q;j++)
			{
				scanf("%f",&b[i][j]);
			}
		}
		printf("The first matrix is=>\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf(" %f",a[i][j]);
				if(j==n-1)
					printf("\n");
			}
		}
		printf("The second matrix is=>\n");
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				printf(" %f",b[i][j]);
				if(j==q-1)
					printf("\n");
			}
		}
		printf ("The A*B matrix is:\n");
		for(i=0;i<m;i++)
		{
			for(k=0;k<q;k++)
			{
				for(j=0;j<n;j++)	
				{
					s=a[i][j]*b[j][k]+s;
				}
				printf(" %f",s);
				if(k==q-1)
					printf("\n");
				s=0;
			}
				
		}
	}
	else 
		printf("matrix multiplication is not possible\n");
	return 0;
}
/* Output
Enter the size of the rows and columns of the first matrix=>
2
3
Enter the size of the rows and columns of the second matrix=>
3
2
Matrix multiplication is possible
Enter the entries of the first matrix=>
Enter entries of row 1=>
1
2
3
Enter entries of row 2=>
4
5
6
Enter the entries of the second matrix=>
Enter entries of row 1=>
11
12
Enter entries of row 2=>
13
14
Enter entries of row 3=>
15
16
The first matrix is=>
 1.000000 2.000000 3.000000
 4.000000 5.000000 6.000000
The second matrix is=>
 11.000000 12.000000
 13.000000 14.000000
 15.000000 16.000000
The A*B matrix is:
 82.000000 88.000000
 199.000000 214.000000

--------------------------------
Process exited after 12.29 seconds with return value 0
Press any key to continue . . .
 */