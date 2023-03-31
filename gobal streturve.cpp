#include <stdio.h> 
#include "struct.h" 
#include "module2.h"  
 
MY_STRUCT globalStruct = {1,3.14159, "Hello World"};  
 
int main() 
{ 
  printf("The globalStruct has values-> %d %f %s\n",  
         globalStruct.x, globalStruct.y, globalStruct.str); 
  funcInModule2();  
  return 0;  
}  

