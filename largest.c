/*
Student Name:Dipak Gautam
Subject:Programmingf Fndamentals
Program:Program to print Odd and Even nos.
Lab no:05
Date:21 oct 2016
*/
#include<stdio.h>
//#include<conio.h>

int main()
{
	int a,b,c;
	printf("Enter first number:\n");
        scanf("%d",&a);
        printf("Enter second number:\n");
        scanf("%d",&b);
        printf("Enter third number:\n");
        scanf("%d",&c);
        if (a>=b && a>=c)
        {
        printf("a is largest");}
         else if (b>=a && b>=c)
        {
        printf("b is largest");}
        else
        {
			printf("c is largest");
		}
      return 0;
}
