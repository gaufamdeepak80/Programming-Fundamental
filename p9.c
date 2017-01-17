#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=1;
        for(j=1;j<=n;j++)
        {

            if(j>=n+1-i)
                printf("%d\t",k++);
                else
                printf(" \t");

        }
        printf("\n");

    }
}
