#include<stdio.h>
void main()
{
int a[5]={10,20,30,40,50},ele,i,j;
int b[5];
ele=sizeof(a)/sizeof(a[0]);
for(i=0,j=ele;i<ele;i++,j--)
{
b[j]=a[i];
}
printf("%d",b[j]);






}
