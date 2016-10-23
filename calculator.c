/*
Student Name:Dipak Gautam
Subject:Programming Fundamentals
program:to make calculator
lab no:06
Date:23 oct,2016
*/
#include<stdio.h>
//#include<conio.h>

int main()
{
int op;
float a,b,r;
printf("SIMPLE CALCULATOR\n");

printf("Enter as command\n 1 for addition\n 2 for subtraction\n 3 for multiplication\n 4 for division: \n");

scanf("%d",&op);
printf("Enter any number:  \n");;
scanf("%f",&a);
printf("Enter another value:  \n");
scanf("%f",&b);

//op=getchar();
switch(op)
{
case 1:{
r=a+b;
printf("Sum of two number is %f",r);}
break;
case 2:{
r=a-b;
printf("difference of two number is %f",r);}
break;
case 3:{
r=a*b;
printf("product of two number is %f",r);}
break;
case 4:{
r=a/b;
printf("division of two number is  %f",r);}
break;
default:{
printf("Invalid choice");}
}


return 0;

}
