/*
Student name:Dipak Gautam
Subject :Programming Fundamentals
Program:
Lab no:27
Date:Jan 15
*/
#include<stdio.h>
#include<math.h>

int main()
{
    int i,n,m,sum=0,a;
    printf("Enter a number :");
    scanf("%d",&n);
     printf("Enter power :");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        a=pow(n,i);
        sum=sum+a;

    }
     printf("The sum of(%d upto power %d):%d",n,m,sum );


}
