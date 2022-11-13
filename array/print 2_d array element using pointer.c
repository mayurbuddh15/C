#include<stdio.h>
void main()
{
int i,j,array[3][4]={{10,20,30,40}, {11,22,33,44},{50,60,70,80}};
int *pa[3];
for(i=0;i<3;i++)
pa[i]=array[i];

for(i=0;i<3;i++)
for(j=0;j<4;j++)
printf("%d ",pa[i][j]);



}
