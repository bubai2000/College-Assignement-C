/*Assignment 5b Problem 1: Write a C program to input a 3*3 matrix and print it.
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
	int i,j;
	float a[3][3];
	printf("Enter the entries of the 3*3 matrix\n");
	for(i=0;i<3;i++)
	{
		printf("Enter entries of row %d=>\n",i+1);
		for(j=0;j<3;j++)
		{
			scanf("%f",& a[i][j]);
		}
	}
	printf("The entered matrix is=>\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %f", a[i][j]);
           	if(j==2)
            	printf("\n");
		}
	}
	return 0;	
}

/* Output
Enter the entries of the 3*3 matrix
Enter entries of row 1=>
2
21
3
Enter entries of row 2=>
45
21
9
Enter entries of row 3=>
31
21
65
The entered matrix is=>
 2.000000 21.000000 3.000000
 45.000000 21.000000 9.000000
 31.000000 21.000000 65.000000

--------------------------------
Process exited after 16 seconds with return value 0
Press any key to continue . . .
 */