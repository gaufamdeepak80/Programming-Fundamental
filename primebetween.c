#include<stdio.h>
int main()
{

	int a,i,count=0,b,j;
	printf("Enter a number:");
	scanf("%d",&a);
	printf("Enter a number:");
	scanf("%d",&b);
	for(j=a;j<=b;j++)
{    count=0;
		for(i=2;i<=j/2;i++)
	{
		if(j%i==0)
		{
		count++;
	
		break;
		}
	
	
	
		
	}
		
		if(count==0 && j!=1)
		printf("%d\t",j);
}
	return 0;
}