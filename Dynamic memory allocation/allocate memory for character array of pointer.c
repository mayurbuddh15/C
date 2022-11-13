#include<stdio.h>
#include<stdlib.h>
void main()
{
char *p[3];
int i;
for(i=0;i<3;i++)
p[i]=malloc(sizeof(char)*10);

printf("enter the data..\n");
for(i=0;i<3;i++)
scanf("%s",p[i]);

for(i=0;i<3;i++)
printf("%s",p[i]);


}
