#include<stdio.h>
int i,l;
int search(int ,int *,int);
int main(){
   int n,m;
   printf("enter the size of array:");
   scanf("%d",&n);
   int a[n];
   printf("enter the elements:
");
   for(i=0;i<n;i++){
      scanf("%d",&a[i]);
   }
   printf("enter the element to be searched:");
   scanf("%d",&m);
   search(n,a,m);
   return 0;
}

