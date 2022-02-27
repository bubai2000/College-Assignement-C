/* Assignment 5b Problem 4: Write a C program to enter a 3*3 matrix and print the transverse of the matrix.
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
	int i,j;
	float a[3][3];
	printf("Enter the entries of the matrix=>\n");
	for(i=0;i<3;i++)
	{
		printf("Enter entries of row %d=>\n",i+1);
		for(j=0;j<3;j++)
		{
			scanf("%f",&a[i][j]);	
		}
	}
	printf("Transverse of the matrix=>\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %f",a[j][i]);
			if(j==2)
				printf("\n");	
		}
	}	
	return 0;	
}


/* Output
Enter the entries of the matrix=>
Enter entries of row 1=>
21
41
12
Enter entries of row 2=>
4530
-984
767.874
Enter entries of row 3=>
674637
777
764
Transverse of the matrix=>
 21.000000 4530.000000 674637.000000
 41.000000 -984.000000 777.000000
 12.000000 767.874023 764.000000

--------------------------------
Process exited after 17.39 seconds with return value 0
Press any key to continue . . .
 */