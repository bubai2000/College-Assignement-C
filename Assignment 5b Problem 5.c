/* Assignment 5b Problem 5: Enter any two matrix and find the sum matrix.
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
	printf("The sum of the above matrices is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			s=a[i][j]+b[i][j];
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
21
32
14
Enter entries of row 2=>
56
-19
54
Enter entries of row 3=>
53
41
12
Enter the entries of the second matrix=>
Enter entries of row 1=>
97
14
-65
Enter entries of row 2=>
12
65
86
Enter entries of row 3=>
4
44
41
The first matrix is
 21.000000 32.000000 14.000000
 56.000000 -19.000000 54.000000
 53.000000 41.000000 12.000000
The second matrix is
 97.000000 14.000000 -65.000000
 12.000000 65.000000 86.000000
 4.000000 44.000000 41.000000
The sum of the above matrices is
 118.000000 46.000000 -51.000000
 68.000000 46.000000 140.000000
 57.000000 85.000000 53.000000

--------------------------------
Process exited after 43.33 seconds with return value 0
Press any key to continue . . .
 */