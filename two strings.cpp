#include<stdio.h>
#include <string.h>


int main()
{
	char string1[1000],string2[1000];  
	printf("Enter  string1: ");
	gets(string1);
	printf("Enter  string2: ");
	gets(string2);
	strcat(string1,string2);
	printf("combined two strings ='%s'\n",string1);
 
	return 0;  
}

