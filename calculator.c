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
char op;
float a,b,r;
printf("Enter a operation(+,-,*,/): \n");

scanf("%c",&op);
printf("Enter any number:  \n");;
scanf("%f",&a);
printf("Enter another value:  \n");
scanf("%f",&b);

//op=getchar();
switch(op)
{
case'+':{
r=a+b;
printf("Sum of two number is %f",r);}
break;
case'-':{
r=a-b;
printf("difference of two number is %f",r);}
break;
case'*':{
r=a*b;
printf("product of two number is %f",r);}
break;
case'/':{
r=a/b;
printf("division of two number is  %f",r);}
break;
default:{
printf("Invalid choice");}
}


return 0;

}
