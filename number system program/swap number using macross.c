#include<stdio.h>
#define swap(i) i=((i&0x00ff)<<8|((i&0xff00)>>8))
void main(){
	short int k=10,i,j;
	for(i=15;i>=0;i--)
	{
		printf("%d",k>>i&1);
		if((i%8)==0)
			printf(" ");
	}
	printf("\n");
	swap(k);
		for(i=15;i>=0;i--)
		{
			printf("%d",k>>i&1);

		}
}
