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
	int a;
	printf("Enter any number(a)\n");
	scanf("%d",&a);
	
	
	(a%2==0) ? printf("%d is even",a) : printf("%d is odd",a);
return 0;
}
