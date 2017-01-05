#include<stdio.h>
int main()
{

	int a,i,count;
	x:
	printf("Enter a number:");
     scanf("%d",&a);

	    count=0;
	for(i=2;i<=a/2;i++)
	{
		if(a%i==0)
		count++;
       break;
	}

	if(a!=1)


	        {
	            if(count==0)
            printf("%d is prime number\n",a);
            else
            printf("%d is a composite  number\n",a);
	       goto x;

	        }

	else
        printf(" 1 is neither composite nor prime\n");
        printf(" Try for other inputs\n");
        goto x;
	return 0;
}
