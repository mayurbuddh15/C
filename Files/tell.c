#include<stdio.h>
void main()
{
FILE *fp;
char ch;
fp=fopen("data","r");
printf("1) fp=%p %ld\n",fp,ftell(fp));
ch=fgetc(fp);
printf("2) fp=%p %ld\n",fp,ftell(fp));
ch=fgetc(fp);
printf("3) fp=%p %ld\n",fp,ftell(fp));
ch=fgetc(fp);
printf("4) fp=%p %ld\n",fp,ftell(fp));
}
