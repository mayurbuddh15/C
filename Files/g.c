#include<stdio.h>
#include<string.h>
void main(int argc,char **argv)
{
char s[100],*p;
FILE *fp;
fp=fopen(argv[2],"r");

while(fgets(s,100,fp))
if(strstr(s,argv[1]))
printf("%s",s);



}
