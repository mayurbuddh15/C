#include<stdio.h>
void main(int argc,char **argv)
{
char ch;
if(argc!=2)
{	
printf("./a.out usage file-name");
return;
}
FILE *fp=fopen(argv[1],"r");
if(fp==0)
{
printf("file is not present....\n");
return;
}
while((ch=fgetc(fp))!=EOF)
{
printf("%c",ch);
}


}
