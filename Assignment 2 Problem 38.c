/* Assignment 2 Problem 38: Printing Pascal's Triangle
Roll no.: MTUG/118/19*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("Enter number of lines to be printed=>");
	scanf("%d",&n);
	for(int i=0; i<=n; i++)
	{
		for(int k=0;k<n-i;k++)
		{
			printf(" ");
		}
		for(int j=0; j<=i; j++)
		{
			int p=tgamma(i+1)/(tgamma(j+1)*tgamma(i-j+1));   //tgamma(x+1) returns gamma(x+1)=x!
			printf("%d ",p);
		}
		printf("\n");
	}
}

/* Output
Enter number of lines to be printed=>7
       1
      1 1
     1 2 1
    1 3 3 1
   1 4 6 4 1
  1 5 10 10 5 1
 1 6 15 20 15 6 1
1 7 21 35 35 21 7 1

[Program finished]

*/
