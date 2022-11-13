#include<stdio.h>
void main(){
int a[5],sl,i;
printf("Enter the number\n");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
for(sl=a[0],i=0;i<5;i++)
{
if(a[i]<sl)
sl=a[i];
}
printf("%d",sl);

}
