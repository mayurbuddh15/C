#include<stdio.h>
void main()
{
int i=1234356;
FILE *fp;
fp=fopen("data","w");
printf("%d",i);
fprintf(fp,"%d",i);
}
