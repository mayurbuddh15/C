#include<stdio.h>
void main(int argc,char** argv)
{
	if(argc<3)
	{
		printf("Usage message:./a.out file name ");
		return;
	}
	char ch,op;
	FILE *fp,*fs;
	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("file is not present\n");
		return;
	}
	fs=fopen(argv[2],"w");
	if(fs)
	{
	printf("the destination file aleady present..\n");
	printf("if you want to trucated press Y\n");
	scanf("%c",&op);
	}
	else
	op='y';
	if(op=='y'||op=='Y')
	{
	fs=fopen(argv[2],"w");
	while((ch=fgetc(fp))!=EOF)
	fputc(ch,fs);
	}
}
