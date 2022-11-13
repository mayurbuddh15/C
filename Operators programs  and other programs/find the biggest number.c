#include<stdio.h>
void main(){
	int l,a[5],i;
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	for(l=a[0],i=1;i<5;i++)
	{
		if(a[i]>l)
		l=a[i];
	}
	printf("%d",l);

}
