#include<stdio.h>
#include<stdlib.h>
void main(int argc,char **argv)
{
	if(argc!=3)
	{
		printf("Usage:./a.out file name\n");
		return;
	}
	int i,c=0;
	char ch,*p;
	FILE *fp;
	fp=fopen(argv[1],"r");
	while((ch=fgetc(fp))!=EOF)
		c++;
	rewind(fp);
	i=0;
	p=malloc(c+1);
		while((ch=fgetc(fp))!=EOF)
			p[i++]=ch;
	p[i]='\0';
	rewind(fp);

	for(i=0;p[i];i++)
		if(p[i]==argv[2][0]) 
			p[i]=argv[3][0];
	for(i=0;p[i];i++)
		fputc(p[i],fp);
}
