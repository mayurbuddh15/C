#include<stdio.h>
void main(){
int a[2][3]={10,20,30,40,50,60},r,c;
int i,j;
r=sizeof(a)/sizeof(a[0]);
c=sizeof(a[0])/sizeof(a[0][0]);
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d",a[i][j]);
}
}
}
