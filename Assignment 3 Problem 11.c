/* Assignment 3 Problem 11: Checking if entered number is Armstrong 
Roll no.: MTUG/118/19*/
#include<stdio.h>
#include<math.h>
int main()
{
	int i=0,n,sum=0,k,r,j,t;
	printf("Enter number=>");
	scanf("%d",&n);
	r=n;
	t=n;
	do
	{
		j=n%10;
		i++;
		n=n/10;
	}while(n!=0);
	do
	{
		k=r%10;
		sum+=pow(k,i);
		r=r/10;
	}while(r!=0);	
	if(sum==t)
	{
		printf("%d is an Armstrong number",t);
	}	
	else
	{
		printf("%d is NOT an Armstrong number",t);
	}	
	return 0;	
}


/* Output 1
Enter number=>153
153 is an Armstrong number
--------------------------------
Process exited after 1.945 seconds with return value 0
Press any key to continue . . .

Output 2
Enter number=>7674
7674 is NOT an Armstrong number
--------------------------------
Process exited after 2.03 seconds with return value 0
Press any key to continue . . .

 */