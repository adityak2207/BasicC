//Program to calculate average of n nos and calculate mean deviation
#include<stdio.h>
void main()
{
	int i,a[100],n;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	printf("Enter n nos : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	float sum=0,avg;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	avg=sum/n;
	float dev=0;
	float dev_1;
	for(i=0;i<n;i++)
	{
		dev=(dev+abs(avg-a[i]));
	}
	dev_1=dev/n;
	printf("The average and mean deviation of %d nos : %0.2f and %0.2f",n,avg,dev_1);
	
}
