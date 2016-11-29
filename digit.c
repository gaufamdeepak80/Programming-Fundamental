/*
Student Name:Dipak Gautam
subject:Programming Fundamendals
Program:
Lab no:18
Date:29 Nov,2016
*/
#include<stdio.h>

int main()
{

 int b=0,a;
 printf("Enter Any Number:");
 scanf("%d",&a);
 b=a%10;
 printf("Last digit is %d",b);
 for(;a>10;)
 {
 a=a/10;
 }
 printf("\nFirst digit is %d",a);
  
}
