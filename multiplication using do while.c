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
    int i,j,a,n,k,l;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Multiplication table\n");
    for(l=1;l<=15;l++)
    {
        printf("-");
    }

    i=1;
  do
    {
        j=1;
        do

        {
            a=i*j;
            printf("\n%d |* |%d |= |%d|",i,j,a);
           j++;
        } while(j<=10);
        printf("\n");
        i++;
        for(k=1;k<=15;k++)
    {
        printf("-");
    }
    }  while(i<=n);

}


