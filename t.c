#include<stdio.h>
#include<string.h>
void squareroot(int x)
{
	int y;
	y=x*x;
	if(x==2)
	{
		printf("YEP");
	}
	else
	{
		printf("The answer is %d",y);
	}
}
int main()
{
	int a;
	char str[100];
	printf("Enter the function:");
	scanf("%s",str);
	if(strcmp(str,"squareroot")==0)
	{
		printf("Enter the number for using the function:");
		scanf("%d",&a);
		squareroot(a);
	}
}
