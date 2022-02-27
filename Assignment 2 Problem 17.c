/* Assignent 2 Problem 17: Printing sum of series 1/2!+2/3!+...+n/(n+1)! 
Roll no.: MTUG/118/19*/
#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;
	float sum=0;
	printf("Enter number of terms=>");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=(i/tgamma(i+2));  //tgamma(x+1)=gamma(x+1)=x! 
	}
	printf("Result of summation=%f",sum);
	return 0;
}
/* Output
Enter number of terms=>6
Result of summation=0.999802
--------------------------------
Process exited after 1.366 seconds with return value 0
Press any key to continue . . .
*/
