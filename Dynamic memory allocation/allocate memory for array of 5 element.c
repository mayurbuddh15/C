#include<stdio.h>
#include<stdlib.h>
void main()
{
int *p;
int i;
p=malloc(sizeof(int)*5);

printf("Enter the data...\n");
for(i=0;i<5;i++)
scanf("%d",&p[i]);

for(i=0;i<5;i++)
printf("%d",p[i]);


}
