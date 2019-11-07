/*WAP to seperate a given input string into 2 strings such that all the odd positioned(array elements..1,3)
are stored in one array and the same thing for even array and print the 2 arrays*/
#include<stdio.h>
#include<string.h>
void main()
{
	printf("Enter a string : ");
	char str[100],str1[100],str2[100];
	gets(str);
	int i,j=0,k=0,n;
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{	str1[j]=str[i];
			j++;
		}	
		else
		{	str2[k]=str[i];
			k++;
		}	
	}
	printf("Odd String : ");
	puts(str1);
	printf("\nEven String : ");
	puts(str2);
}
