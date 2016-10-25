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
 int i=0,sum=0,n;
 printf("Enter n number:  ");
 scanf("%d",&n);
 
 do
 {
	 sum+=i;	
	 printf("sum of %d nos is : %d\n",i,sum);
	 
 i++;
 }
 while(i<=n);
 

 return 0;
}
