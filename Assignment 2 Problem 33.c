/* Assignment 2 Problem 33: Program to print the pyramid using '*'
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
int i,s,r,k;
printf("Enter the number of rows=>");
scanf("%d",&r);
for(i=1;i<=r;i++)
{
	k=0;
	for(s=1;s<=r-i;s++)
	{
		printf(" ");
	}
	for(k=1;k<=i;k++)
	{
		printf("* ");
	}
	printf("\n");
}
return 0;
}

/* Output
Enter the number of rows=>6
     *
    * *
   * * *
  * * * *
 * * * * *
* * * * * *

--------------------------------
Process exited after 1.093 seconds with return value 0
Press any key to continue . . .
 */