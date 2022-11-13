#include<stdio.h>
void main()
{
int i,j,arr[5]={25,40,55,70,85},*p=arr;
for(i=0;i<5;i++)
{
printf("%d",*p++);
printf("\n");
}
for(j=0;j<5;j++)
printf("%d ",*--p);
printf("\n");








}
