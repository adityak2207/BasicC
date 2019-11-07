//WAP to read first word of a sentence as a character array and if the first character isn't uppercase convert it to uppercase and print the word
#include<stdio.h>
#include<string.h>
void main()
{
	printf("Enter a sentence : ");
	int i,n;
	char str[100],str1[100];
	gets(str);
	for(i=0;str[i]!=' ';i++)//Storing the first word of the sentence in a new character array
	{
		str1[i]=str[i];
	}
	if(str1[0]>='a'&&str1[0]<='z')
	{
		str1[0]=str1[0]-('a'-'A');
	}
	printf("The required word is ");
	puts(str1);
}
