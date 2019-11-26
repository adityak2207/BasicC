//Program to store marks score by n students and find the no of students who scored higher then or equal to 12 (Max Score 30)
#include<stdio.h>
void main()
{
	printf("Enter the no of students : ");
	int n;
	scanf("%d",&n);
	int a[100],i;
	printf("Enter the marks scored by each student : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int count=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>=12)
		{
			count++;
		}
	}
	printf("The no of students who scored higher then or equal to 12 are %d",count);
}
