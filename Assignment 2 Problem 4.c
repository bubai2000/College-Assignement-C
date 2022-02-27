/* Assignent 2 Problem 4: Finding factors of positive number
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
		int i,n;
		printf("Enter the number=>");
		scanf("%d",&n);
		printf("Factors of %d are:\n",n);
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
			{
				printf("%d ",i);
			}
		}
		return 0;
}

/* Output
Enter the number=>132
Factors of 132 are:
1 2 3 4 6 11 12 22 33 44 66 132
[Program finished]
 */