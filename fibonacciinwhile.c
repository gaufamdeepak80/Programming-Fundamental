/*
Student Name:Dipak Gautam
Subject:Programming Fundamentals
Program:Fibonaci serries
LAb no:24
Date:3rd Jan
*/
#include<stdio.h>

int main()
{
    int a=1,b=1,i,n,c;
    printf("Enter a number:");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        c=a+b;
        printf("%d\t",a);
        a=b;
        b=c;
        i++;
    }

}
