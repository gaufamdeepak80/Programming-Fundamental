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
 int a,b,sum=0;
 printf("Enter a number:  ");
 scanf("%d",&a);
 b=a;
 do
 {
	 sum+=b;	
	  b--;
 
 }
 while(b>0);
 printf("the sum of %d natural numbers=%d",a,sum);

 return 0;
}
