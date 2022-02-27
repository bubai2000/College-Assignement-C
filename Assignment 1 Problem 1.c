/* Assignent 1 Problem 1: Enter any 3 numbers and print their sum and product 
Submityed by Soumyadip Nayak, MTUG/118/19*/
#include<stdio.h>
int main()
{
	float a,b,c,sum,prod;
	printf("Enter any three number:\n");
	scanf("%f %f %f", &a, &b, &c);
	sum=a+b+c;
	prod=a*b*c;
	printf("\n Summation of %f %f and %f = %f", a,b,c,sum);
	printf("\n Product of %f %f and %f = %f",a,b,c,prod);
	return 0;
}

/* Output
Enter any three number:
81.3
56.1
21.9

 Summation of 81.300003 56.099998 and 21.900000 = 159.299988
 Product of 81.300003 56.099998 and 21.900000 = 99884.367188
 */