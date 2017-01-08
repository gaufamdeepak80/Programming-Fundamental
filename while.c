 /*
student name:Dipak Gautam
subject:Programming fundamentals
Program:Leap Year
lab no:25
Date:29 dec,2016
*/
#include<stdio.h>

int main()
{
    int a;
    printf("Enter of year: ");
    scanf("%d",&a);
    if(a%4==0 && a%100!=0)
    {
        if(a%4==0)
    {
        printf("%d is a leap year",a);
    }
        else
        printf("%d is  not a leap year",a);
    }

}
