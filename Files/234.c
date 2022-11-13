#include<stdio.h>
void main()
{
FILE *fp;
int i;
fp=fopen("data","r");
fscanf(fp,"%d",&i);
printf("i=%d\n",i);



}
