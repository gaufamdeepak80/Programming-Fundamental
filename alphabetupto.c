#include<stdio.h>
int main()
{
	char ch,i;
	x:
	printf("Enter alphabet up to which u want to c up to  :");
	scanf("%c",&i);
	if(65<=i && i<=90){
	for(ch='A';ch<=i;ch++){

		printf("%c\t\n",ch);
	}}
		if(97<=i && i<=122){
	for(ch='a';ch<=i;ch++){

		printf("%c\t\n",ch);

	}}
	goto x;
}
