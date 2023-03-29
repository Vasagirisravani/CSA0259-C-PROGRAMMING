Using String Library FunctionC
#include <stdio.h>
#include <string.h>
 
 
int main()
{
   char s1[1000],s2[1000];  
 
    printf("Enter  string1: ");
    gets(s1);
    printf("Enter  string2: ");
    gets(s2);
    if(!strcmp(s1,s2))
        printf("strings are equal");
    else
        printf("strings are not equal");    
 
    return 0;
    

