//WAP to read first word of a sentence as a character array and if the first character isn't uppercase convert it to uppercase and print the word
#include<stdio.h>
void main()
{
	printf("Enter a sentence : ");
	int i,n;
	char str[100],str1[100];
	for(i=0;str[i]!='\0';i++);
	{
		scanf("%c",&str[i]);
	}
	for(i=0;str[i]!=' ';i++)//Storing the first word of the sentence in a new array
	{
		str1[i]=str[i];
	}
	if(str[0]>='a'&&str[0]<='z')
	{
		str[0]=str[0]+('a'-'A');
	}
}
