#include<stdio.h>
#include<string.h>
void main(int argc,char **argv)
{
int i;
if(argc!=2)
{
printf("Usage message");
return ;
}
i=strlen(argv[1]);
printf("the string %s length =%d\n",argv[1],i);



}
