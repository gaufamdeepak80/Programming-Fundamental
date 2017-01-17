#include<stdio.h>
int main()
{
    int i,j,r;
    int k=0;
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {(i<=4) ? k++ : k--;;
        for(j=1;j<=2*r-1;j++)
        {

            if(j>=i && j<=2*r-i )

            {
                 printf("*");

            }
            else
            {
                printf(" ");

            }
        }
        printf("\n");

    }
    return 0;
}



