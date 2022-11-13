#include<stdio.h>
void main(){
int i,n1,n;
printf("Enter the number\n");
scanf("%d",&n);
for(n1=n,i=0;n1;n1/=10)
{
i=i*10+n1%10;
}
printf("%d",i);


}
