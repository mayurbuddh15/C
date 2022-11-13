#include<stdio.h>
void main(){
int a[5],ele,i;
ele=sizeof(a)/sizeof(a[0]);

printf("Enter the ele...\n");

for(i=0;i<ele;i++)
scanf("%d",&a[i]);

for(i=0;i<ele;i++)
printf("%d",a[i]);



}
