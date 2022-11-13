#include<stdio.h>
#include<stdlib.h>
void main()
{
int n,i;
char **p;
scanf("%d",&n);

p=malloc(sizeof(char *)*n);

for(i=0;i<n;i++)
p[i]=malloc(sizeof(char)*10);

printf("Enter the data...\n");

for(i=0;i<n;i++)
scanf("%s",p[i]);

for(i=0;i<n;i++)
printf("%s",p[i]);

}
