#include<stdio.h>
void main()
{
FILE *fp;
char i[1000];
fp=fopen("data","r");
fread(&i,sizeof(i),1000,fp);
printf("i=%s\n",i);
}
