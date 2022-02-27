/* Assignment 3 Problem 13: Printinf a to z
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
	char c='a';
	printf("Printing 'a' to 'z'");
	do
	{
		printf("\n %c",c);
		++c;
	}while(c<='z');
	return 0;
}


/* Output
Printing 'a' to 'z'
 a
 b
 c
 d
 e
 f
 g
 h
 i
 j
 k
 l
 m
 n
 o
 p
 q
 r
 s
 t
 u
 v
 w
 x
 y
 z
--------------------------------
Process exited after 0.0158 seconds with return value 0
Press any key to continue . . .
 */