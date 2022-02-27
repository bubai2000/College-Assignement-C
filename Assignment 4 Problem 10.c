/* Assignment 4 Problem 10: Input any character and check whether it is alphabet, digit or special character.
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{ 
	char a;
	printf(" Enter any character=>");
	scanf("%c",&a);
	if(a>='a' && a<='z' || a>='A' && a<='Z')
		printf("%c is alphabet",a);
	else if (a>=0 && a<9 )
		printf("%c is digit",a);
	else 
		printf("%c is special character",a);
	return 0;
}

/* Output
 Enter any character=>%
% is special character
--------------------------------
Process exited after 3.674 seconds with return value 0
Press any key to continue . . .
 */