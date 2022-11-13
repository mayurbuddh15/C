#include<stdio.h>
void main(int argc,char** argv)
{
	if(argc<3)
	{
		printf("file is too low....\n");
		return;
	}
	FILE *fs,*fd;
	int i;
	char ch,op;
	fs=fopen(argv[1],"r");
	for(i=2;i<argc;i++)
	{
	fd=fopen(argv[i],"r");
		if(fd)
		{
			printf("destination file is present \n");
			printf("if you want to trucate press Y\n");
			scanf("%c",&op);
		}
		else 
			op='y';
		if(op=='Y'||op=='y')
		{
				
				fd=fopen(argv[i],"w");
				while((ch=fgetc(fs))!=EOF)
					fputc(ch,fd);
			
		}
				rewind(fs);
	}
}
