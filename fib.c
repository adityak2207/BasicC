//Write a C program to display Fibonacci Series
#include<stdio.h>
void main()
{
	int n;
	printf("Enter the no of terms of the series : ");
	scanf("%d",&n);
	printf("The Fibonacci Series : ");
	fib(n);
}
void fib(int n)
{
	int i,a[100],sum=1;
	a[0]=0;
	a[1]=1;
	printf("%d ",a[0]);
	printf("%d ",a[1]);
	for(i=2;i<n;i++)
	{
	 a[i]=sum;
	 printf("%d ",a[i]); 
	 sum=sum+a[i];
	}
}
