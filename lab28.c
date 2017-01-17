#include<stdio.h>
int main()
{
    int i,j,a;
    scanf("%d",&a);
    printf("\n\n\n\n\n");
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)

        {
            if(j>=i)
                printf("*");
                else
                printf(" ");
        }
        printf("\n");
    }
}
