/*
Student name:Dipak Gautam
Subject:Programming Fundamentals
Program:Program to take two numbers from user and print largest and smallest nos using terniary operator.
Lab no:07
Date:24 oct,2016
*/

#include<stdio.h>
//#include<conio.h>

int main()
{ 
	int a,b,c;
	printf("Enter any number(a)\n");
	scanf("%d",&a);
	printf("Enter another number(b)\n");
	scanf("%d",&b);
	c=(a>b) ? a  : b ;
	printf("%d is largest\n",c);
	c=(a<b) ? a:b;
	printf("%d is smallest",c);
 return 0;
}
