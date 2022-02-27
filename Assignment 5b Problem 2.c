/* Assignment 5b Problem 2: Inputting a 3*3 array and computing sum of it's entries
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
	int i,j;
	float a[3][3],s=0;
	printf("Enter the entries of the 3*3 matrix=>\n");
	for(i=0;i<3;i++)
	{
		printf("Enter entries of row %d=>\n",i+1);
		for(j=0;j<3;j++)
		{
			scanf("%f",& a[i][j]);
			s+=a[i][j];
		}
	}
	printf("The matrix is=>\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %f", a[i][j]);
            if(j==2)
            	printf("\n");
		}
	}
	printf("The sum of the entries is %f",s);
	return 0;	
}

/* Output
Enter the entries of the 3*3 matrix=>
Enter entries of row 1=>
31
12
41
Enter entries of row 2=>
-25
10.25
42
Enter entries of row 3=>
23
41
-31.5
The matrix is=>
 31.000000 12.000000 41.000000
 -25.000000 10.250000 42.000000
 23.000000 41.000000 -31.500000
The sum of the entries is 143.750000
--------------------------------
Process exited after 33.47 seconds with return value 0
Press any key to continue . . .
 */