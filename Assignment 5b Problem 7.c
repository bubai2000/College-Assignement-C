/* Assignment 5b Problem 7: Write a C program to perform scalar matrix multiplication.
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
	int i,j;
	float c,s,a[3][3];
	printf("Enter the entries of the matrix=>\n");
	for(i=0;i<3;i++)
	{
		printf("Enter entries of row %d=>\n",i+1);
		for(j=0;j<3;j++)
		{
			scanf("%f",&a[i][j]);
		}
	}
	printf("Enter the scalar=>");
	scanf("%f",&c);
	printf("The resultant matrix is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			s=a[i][j]*c;
			printf(" %f",s);
			if(j==2)
				printf("\n");
		}	
	}
	return 0;
}

/* Output
Enter the entries of the matrix=>
Enter entries of row 1=>
91.9
92.7
93.5
Enter entries of row 2=>
98.3
100.1
104.8
Enter entries of row 3=>
107
23
45
Enter the scalar=>3
The resultant matrix is
 275.700012 278.099976 280.500000
 294.900024 300.299988 314.400024
 321.000000 69.000000 135.000000

--------------------------------
Process exited after 37.02 seconds with return value 0
Press any key to continue . . .
 */