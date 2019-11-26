//Program to find the factorial of a no using recursion
#include<stdio.h>
void main()
{
	printf("Enter a number : ");
	int n;
	scanf("%d",&n);
	printf("The factorial of %d = %d",n,fact(n));
}
int fact(int n)
{
	if(n>=1)
	{
		return n*fact(n-1);
	}
	else
	{
		return 1;
	}
}
