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

 int b,a,sum=0;

 printf("Enter Any Number:");
 scanf("%d",&a);
 while(a>0)
 {
 b=a%10;
 sum=b+sum*10;
 a/=10;
 }
 printf("\nSum of digits is %d",sum);
}
