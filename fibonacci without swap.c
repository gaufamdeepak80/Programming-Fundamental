#include<stdio.h>
int main()
{
    int a=1,b=1,i,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=a+b;
        printf("%d\t",b);
        b=a-b;



    }
}
