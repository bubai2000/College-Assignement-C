/* Assignment 5b Problem 6: Write a C program to find A-B , where A,B are square matrix.
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
	int i,j;
	float s,a[3][3],b[3][3];
	printf("Enter the entries of the first matrix=>\n");
	for(i=0;i<3;i++)
	{
		printf("Enter entries of row %d=>\n",i+1);
		for(j=0;j<3;j++)
		{
			scanf("%f",&a[i][j]);
		}
	}
	printf("Enter the entries of the second matrix=>\n");
	for(i=0;i<3;i++)
	{
		printf("Enter entries of row %d=>\n",i+1);
		for(j=0;j<3;j++)
		{
			scanf("%f",&b[i][j]);
		}
	}
	printf("The first matrix is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %f",a[i][j]);
			if(j==2)
				printf("\n");
		}
	}
	printf("The second matrix is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %f",b[i][j]);
			if(j==2)
				printf("\n");
		}
	}
	printf("The resultant matrix is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			s=a[i][j]-b[i][j];
			printf(" %f",s);
			if(j==2)
				printf("\n");
		}	
	}
	return 0;
}
/* Output
Enter the entries of the first matrix=>
Enter entries of row 1=>
43
12
85
Enter entries of row 2=>
89
75
54
Enter entries of row 3=>
107
21
43
Enter the entries of the second matrix=>
Enter entries of row 1=>
67
18
94
Enter entries of row 2=>
31
54
96
Enter entries of row 3=>
43
61
69
The first matrix is
 43.000000 12.000000 85.000000
 89.000000 75.000000 54.000000
 107.000000 21.000000 43.000000
The second matrix is
 67.000000 18.000000 94.000000
 31.000000 54.000000 96.000000
 43.000000 61.000000 69.000000
The resultant matrix is
 -24.000000 -6.000000 -9.000000
 58.000000 21.000000 -42.000000
 64.000000 -40.000000 -26.000000

--------------------------------
Process exited after 44.64 seconds with return value 0
Press any key to continue . . .
 */