#include<stdio.h>
void main()
{
int a[5];
FILE *fp;
int i;
fp=fopen("data","r");
for(i=0;i<5;i++)
fscanf(fp,"%d",&a[i]);
for(i=0;i<5;i++)
printf("%d",a[i]);




}
