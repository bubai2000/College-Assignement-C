/* Assignment 5b Problem 3: Write a C program of a 3*3 matrix and print the diagonal entries of the matrix and their sum.
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
		}
	}
	printf("The diagonal entries of the matrix are \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				printf("%f\n", a[j][j]);
        		s+=a[j][j];
            }
		}
	}
	printf("\nThe sum of the diagonal entries of the given matrix is %f",s);
	return 0;		
}


/* Output
Enter the entries of the 3*3 matrix=>
Enter entries of row 1=>
23
12
34
Enter entries of row 2=>
56.5
12
11
Enter entries of row 3=>
345
2334
-89
The diagonal entries of the matrix are
23.000000
12.000000
-89.000000

The sum of the diagonal entries of the given matrix is -54.000000
--------------------------------
Process exited after 23.62 seconds with return value 0
Press any key to continue . . .
 */