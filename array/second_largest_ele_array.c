#include<stdio.h>
void main()
{
int a[10],ele,i,l,sl;
ele=sizeof(a)/sizeof(a[0]);
printf("Enter the ele.......\n");
for(i=0;i<ele;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<ele;i++)
{
printf("%d ",a[i]);
}
printf("\n");
if(a[0]>a[1])
{
l=a[0];
sl=a[1];
}
else
{
l=a[1];
sl=a[0];
}
for(i=2;i<ele;i++)
{
if(a[i]>l)
{
sl=l;
l=a[i];
}
else if(a[i]>sl)
sl=a[i];
}
printf("sl=%d\n",sl);
printf("l=%d\n",l);







}

