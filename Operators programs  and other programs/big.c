#include<stdio.h>
void main(){
	int a[10],t,i,j;
	printf("Enter the numbers\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
		for(j=0;j<10-1-i;j++)
			if(a[j]<a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
	}
	printf("%d\n",a[0]);
	printf("%d\n",a[1]);
}
