//Program to read range e-m and print the corresponding ascii value list
#include<stdio.h>
void main()
{
	printf("Enter range (e-m) : ");
	int i;
	char a[3];
	for(i=0;i<3;i++)
	{
		scanf("%c",&a[i]);
	}
	while(a[0]<=a[2])
	{
		printf("\nThe ascii value of %c : %d ",a[0],a[0]);
		a[0]++;
	}
}
