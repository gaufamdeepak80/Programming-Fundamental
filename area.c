/*
Student Name :Dipak Gautam
Subject:Programming Fundamentals
Program:Write a program to read three sides of triangle to calculate area.
Lab no:05
Date:28 sept,2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float a,b,c,s,area;

printf("Enter first side of Triangle:\n");
scanf("%f",&a);
printf("Enter second side of Triangle:\n");
scanf("%f",&b);
printf("Enter third side of Triangle:\n");
scanf("%f",&c);
s=(a+b+c)/2;
printf("s=%f:\n",s);
area=pow((s*(s-a)*(s-b)*(s-c)),0.5);
printf("Area of the Triangle is %f",area);
getch();
}
