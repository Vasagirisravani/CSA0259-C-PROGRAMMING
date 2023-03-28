#include <stdio.h>
#include >conio.h>
main() 
{
int a,b;
/* Read input */
printf("Enter value for A:");
scanf("%d\n",&a);
printf("Enter value for B:");
scanf("%d\n",&b);
/* Swap numbers */
a = a + b; 
b = a - b;
a = a - b;
/* Print the results */
printf("------------------------------------");
printf("A = %d", a); printf("B = %d",b);
printf("------------------------------------");
return 0;
}

