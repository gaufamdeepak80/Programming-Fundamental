/*
Student Name:DIpak Gautam
Subject:Programming Fundamentals
Program:
Lab no:08
Date:25 oct,2016
*/
#include<stdio.h>
//#include<conio.h>
 int main(){
 int a,b,c;
 printf("Enter first number:  ");
 scanf("%d",&a);
 printf("Enter second number:  ");
 scanf("%d",&b);
 printf("Enter third number:   ");
 scanf("%d",&c);
 printf("sum of numbers=%d \n",a+b+c);
 printf("Average of numbers=%d\n",(a+b+c)/3);
 printf("Product of numbers=%d\n",a*b*c);
 (a>=b && a>c) ? printf("%d is largest\n",a) : (c>=b && c>a) ? printf("%d is largest\n",c) : printf("%d is largest\n",b);
 (a<b && a<c) ? printf("%d is smallest\n",a) : (c<b && c<a) ? printf("%d is smallest\n",c) : printf("%d is smallest\n",b);
 return 0;
 }
