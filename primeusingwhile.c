/*
Student Name:Dipak Gautam
Subject:Programming Fundamentals
Program:WAP to print multiplication table upto n term using while & do while loop;
LAb no:24
Date:3rd Jan
*/
#include<stdio.h>
int main()
{

	int a,i,count=0,b,j;
	printf("Enter a number:");
	scanf("%d",&a);
	printf("Enter a number:");
	scanf("%d",&b);
	j=a;
	while(j<=b)
    {    count=0;
		for(i=2;i<=j/2;i++)
	   {
		   if(j%i==0)
		   {
		   count++;

		   break;
		   }


        i++;

	   }

		if(count==0 && j!=1)
		printf("%d\t",j);
		j++;
    }
	return 0;
}
