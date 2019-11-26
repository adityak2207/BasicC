//Write a program to input a sentence and convert any Word of user's choice to capital
#include<stdio.h>
#include<string.h>
void main()
{
	printf("Enter a sentence : ");
	char str[100],str1[100],str2[100];
	gets(str);
	int n,count=1;
	n=strlen(str);
	printf("Enter the word that you would like to convert to capital : ");
	gets(str1);
	int i=0,a=-1,j=0,k;
	for(i=0;i<n;i++)
	{
		if(str[i]==' ')
		{
			count ++;
		}
	}
    for(k=0;k<count;k++)
    {
		j=0;
		i++;
		while(str[i]!=' ')
		{
			if(str[i]==str1[j])
			{a++;
			str2[j]=str[i];}
			else
			{a=-1;}	
			j++;
			i++;
		}
	}
	if(a>0)
	{   for(i=0;i<n;i++)
		{
			if(str[i]>='a'&&str[i]<='z')
			str2[i]=str2[i]-32;
		}
		printf("%s",str2);  
	}
	else
	printf("Invalid");
}
