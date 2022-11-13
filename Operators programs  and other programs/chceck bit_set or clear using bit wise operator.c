#include<stdio.h>
void main(){
	int a=0xAB,pos;
	for(pos=8;pos>=0;pos--)
	{
		if(pos==3|pos==5|pos==6)
		{
			printf("%d\n",a>>pos&1);
		}
	}
}
