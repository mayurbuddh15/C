#include<stdio.h>
void main(int argc,char **argv)
{
FILE *fp;
char s[20],*p;
fp=fopen(argv[1],"r");
p=fgets(s,15,fp);
printf("p=%s s=%s",p,s);
}
