#include<stdio.h>
void main()
{
int i=10,j=20,k=30,l;
l=i&&(j=200)&&(k=300)||50;
printf("%d %d %d  %d",i,j,k,l);
}
