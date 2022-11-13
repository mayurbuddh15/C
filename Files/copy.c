#include<stdio.h>
void main(int argc,char **argv)
{
	char ch;
	if(argc!=3)
	{
		printf("Usage message ./a.out ");
		return;
	}
	FILE *fp,*fs;
	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("file is not present");
		return;
	}
	fs=fopen(argv[2],"w");
		while((ch=fgetc(fp))!=EOF)
			fputc(ch,fs);
}
