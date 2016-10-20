/*
Student Name :Dipak Gautam
Subject:Programming fundamentals 
lab no:04
Date:20 oct,2016
*/

#include<stdio.h>
//#include<conio.h>

int main ()
{
int a,b;
printf("Enter one value(d)\n");
scanf("%d",&a);
printf("Enter second value (g)\n");
scanf("%d",&b);


a+=b;
printf("Use of '+=' operator:%d\n",a);

a-=b;
printf("Use of '-=' operator:%d\n",a);

a*=b;
printf("Use of '*=' operator:%d\n",a);
 
a/=b;
printf("Use of '/=' operator:%d\n",a);

a%=b;
printf("Use of '%%=' operator:%d\n",a);

a=b;
printf("Use of '=' operator:%d\n",a);

return 0;

}
