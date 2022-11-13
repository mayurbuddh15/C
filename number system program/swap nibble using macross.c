#include<stdio.h>
#define swap(n) n=((n&0x00ff)<<8 |(n&0xff00)>>8)
void main(){
	int n=15,i;
	for(i=15;i>0;i--){
	printf("%d",n>>i&1);
	if(i%8==0)
	printf(" ");}
	printf("\n");
	swap(n);
	for(i=15;i>0;i--)
	{
		printf("%d",n>>i&1);
		if(i%8==0)
			printf(" ");
	}


}
