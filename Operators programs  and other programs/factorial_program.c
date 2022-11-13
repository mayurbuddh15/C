#include<stdio.h>
void main(){
int n,i,fc;
printf("Enter the number\n");
scanf("%d",&n);
for(i=1,fc=1;i<=n;fc*=i,i++);
printf("%d",fc);


}
