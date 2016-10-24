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
	printf("Enter first number\n");
	scanf("%d",&a);
	printf("Enter second number\n");
	scanf("%d",&b);
	printf("Enter third number\n");
	scanf("%d",&c);
	
	(a>=b && a>=c) ? printf("a is largest\n") : (b>=c && b>=a) ? printf("b is largest\n") : printf("c is largest\n");
	
return 0;
}
