#include<stdio.h>
#include<string.h>
void main(int argc,char **argv)
{
FILE *fp;
int c;
char s[20];
fp=fopen(argv[1],"r");
c=0;
while(fscanf(fp,"%s",s)!=-1)
if(strstr(s,argv[2]))
c++;
printf("c=%d\n",c);





}
