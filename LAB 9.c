#include<stdio.h>
#include<string.h>
#include<conio.h>
int string_compare(char s1[],char s2[]);
int string_length(char s[]);
int concat(char s1[], char s2[]);
int main()
{
	char str[100], str1[100],str2[100],i=0,length,value;
	int choice;
	do
	{
		printf("\n Select the string function you want to use\n");
		printf("\n1. String length\n2. String compare\n3. String concatenation\n4. Exit\n");
		scanf("%d",&choice);
		fflush(stdin);
		switch(choice)
		{
			case 1: printf("\nEnter the string for finding length\n");
					gets(str);
					length=strlen(str);
					printf("\nThe length of the string is %d\n",length);
					break;
			case 2: printf("\nEnter two strings to be compared\n");
					printf("\nEnter the first string");
					gets(str1);
					fflush(stdin);
					printf("\nEnter the second string : ");
					gets(str2);
					value=strcmp(str1,str2);
					if(value==0)
					printf("\nstrings are equal\n");
					else if(value>1)
					printf("\nFirst string is greater than the second\n");
					else
					printf("\nFirst string is lesser than the second\n");
					break;
			case 3: printf("\nEnter two strings to be concatenated : \n");
					printf("\nEnter the first string : ");
					gets(str1);
					fflush(stdin);
					printf("\nEnter the second string : ");
					gets(str2);
					strcat(str1,str2);
					printf("\nThe concatenated string is: %s\n",str1);
					break;
			default: printf("\nExiting...\n");
		}
	} while(choice!=4);
}