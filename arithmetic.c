/*
Student name: Dipak Gautam 
Subject:Programming Fundamentals
Program:
Roll no:10
Lab no:07
Date:18 oct,2016
*/
#include<stdio.h>
//#include<conio.h>
int main()
{
	int a,b,sum,sub,mul,div,mod;
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	
	sum=a+b;
	printf("Use of '+' Operator:\n");
	printf("%d+%d=%d\n",a,b,sum);
	sub=a-b;
	
	printf("Use of '-' Operator:\n");
	printf("%d-%d=%d\n",a,b,sub);
	mul=a*b;
	
	printf("Use of '*' Operator:\n");
	printf("%d*%d=%d\n",a,b,mul);
	div=a/b;
	
	printf("Use of '/' Operator:\n");
	printf("%d/%d=%d\n",a,b,div);
	mod=a%b;
	
	printf("Use of '%' Operator:\n");
	printf("%d %% %d=%d",a,b,mod);
	return 0;
}
	
	
	
	
