#include<stdio.h>
void main(int argc,char **argv)
{
if(argc!=2)
{
printf("usage:./a.out file name\n");
return;
}
char ch;
FILE *fp=fopen(argv[1],"r");
if(fp==0)
{
printf("file is not present\n");
return;
}
while((ch=fgetc(fp))!=EOF)
printf("%c",ch);
}
