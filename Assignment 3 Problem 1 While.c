/* Assignment 3 Problem 1: Printing the  series 100,98,96,....,2
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
	int n=100;
	printf("Even numbers from 100 to 2 are:-\n");
	while(n>0)
	{
		printf("%d\n",n);
		n-=2;
	}
	return 0;
}


/* Output
Even numbers from 100 to 2 are:-
100
98
96
94
92
90
88
86
84
82
80
78
76
74
72
70
68
66
64
62
60
58
56
54
52
50
48
46
44
42
40
38
36
34
32
30
28
26
24
22
20
18
16
14
12
10
8
6
4
2

--------------------------------
Process exited after 0.1213 seconds with return value 0
Press any key to continue . . .
 */
