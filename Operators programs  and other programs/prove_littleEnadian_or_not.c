#include<stdio.h>
void main()
{
int i=1;
char *cp;
cp=(char *)&i;
if(*cp==1)
	{
	printf("little Enadians\n");
	}
else
{
	printf("Big enadian\n");
}
}
