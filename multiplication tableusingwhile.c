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
    int i,j,a,n;
    printf("Enter a number:");
    scanf("%d",&n);

    i=1;
    while(i<=n)
    {
        j=1;
        while(j<=10)
        {
            a=i*j;
            printf("%d\t",a);
           j++;
        }
        printf("\n");
        i++;
    }

}

