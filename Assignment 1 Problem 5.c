/* Assignment 1 Problem 5: Convert Fareheit to Celcius
Roll no.: MTUG/118/19 */
#include<stdio.h>
int main()
{
	float c,f;
	printf("Enter tempereture in Farenheit=> ");
	scanf("%f",&f);
	c=(5.0/9.0)*(f-32); // As we know C/5=(F-32)/9
	printf("%0.2f degree Farenheit tempereture in Celcius = %0.2f degree",f, c);
}

/*Output
Enter tempereture in Farenheit=> 98
98.00 degree Farenheit tempereture in Celcius = 36.67 degree
[Program finished]
*/