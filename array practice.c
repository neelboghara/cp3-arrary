#include<stdio.h>
int main()
{



int array[5]={};
int size = 5;
int smallest=1000000000;
int biggest=-1000000000;
for(int i=0,n=0,j=0;i<size,n<size,j<size;i++,n++,j++)
{
scanf("%d",&array[i]);
if(array[j]<smallest)
    smallest=array[j]; 
if(array[n]>biggest)
   biggest=array[n];
}
 printf("%d %d", biggest,smallest);

return 0;
}