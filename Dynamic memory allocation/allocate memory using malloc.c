#include<stdio.h>
#include<stdlib.h>
void main()
{
int *p;
p=malloc(sizeof(int));

printf("Enter the integer...\n");
scanf("%d",p);

printf("*p=%d\n",*p);




}
