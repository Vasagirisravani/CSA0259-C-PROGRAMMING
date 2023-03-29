#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size

/** Function declaration */
void removeAll(char *, const char);


int main()
{
    char str[MAX_SIZE];
    char toRemove;

    printf("Enter any string: ");
    gets(str);

    printf("Enter character to remove from string: ");
    toRemove = getchar();

    removeAll(str, toRemove);

    printf("String after removing '%c': %s", toRemove, str);

    return 0;
}

