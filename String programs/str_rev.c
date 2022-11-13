#include<stdio.h>
void main()
{
char a[20],temp,b[20];
int i,j,k;
printf("Enter the string");
scanf("%s",a);
for(i=0;a[i];i++);
//printf("%d",i);
for(k=0,j=i-1;j>=k;j--,k++)
{
temp=a[k];
a[k]=a[j];
a[j]=temp;
}
printf("%s",a);

}
